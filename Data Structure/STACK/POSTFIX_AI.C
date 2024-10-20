#include <stdio.h>
#include <string.h>
#define SIZE 20

struct stack {
    char s[SIZE];
    int top;
} st;

int incoming(char ch);
int instack(char ch);
int push(char ch);
char pop();
void postfix(char que[], int s);

int instack(char ch) {
    switch (ch) {
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 4;
    case '^':
        return 5;
    case '(':
        return 0;
    default:
        return -1;  // For invalid characters
    }
}

int incoming(char ch) {
    switch (ch) {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 3;
    case '^':
        return 6; // Exponentiation is right-associative
    case '(':
        return 9;
    case ')':
        return 0;
    default:
        return -1;  // For invalid characters
    }
}

int push(char ch) {
    if (st.top < SIZE - 1) {
        st.top++;
        st.s[st.top] = ch;
        return 1;
    }
    return 0;  // Stack overflow
}

char pop() {
    if (st.top > -1) {
        return st.s[st.top--];
    }
    return '\0';  // Stack underflow
}

void postfix(char que[], int s) {
    char answer[s];
    int k = 0;

    for (int i = 0; que[i]; i++) {
        char current = que[i];
        int incValue = incoming(current);

        // Operand goes directly to output
        if ((current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z') || (current >= '0' && current <= '9')) {
            answer[k++] = current;
        }
        // Handle left parenthesis
        else if (current == '(') {
            push(current);
        }
        // Handle right parenthesis
        else if (current == ')') {
            while (st.top != -1 && st.s[st.top] != '(') {
                answer[k++] = pop();
            }
            pop();  // Pop the '('
        }
        // Operator encountered
        else {
            while (st.top != -1 && instack(st.s[st.top]) >= incValue) {
                answer[k++] = pop();
            }
            push(current);
        }
    }

    // Pop all remaining operators in the stack
    while (st.top != -1) {
        answer[k++] = pop();
    }

    // Print the final postfix expression
    printf("Postfix expression: ");
    for (int i = 0; i < k; i++) {
        printf("%c", answer[i]);
    }
    printf("\n");
}

int main() {
    char infix[30];
    st.top = -1;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    int s = strlen(infix);
    postfix(infix, s);

    return 0;
}
