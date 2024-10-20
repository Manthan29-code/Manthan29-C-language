#include <stdio.h>
#include<string.h>
#define size 20
struct stack
{
    char s[size];
    int top;
}st;
// void infix_postfix(char ch[],int s);
int incoming(char ch);
int instack(char ch);
int push(char ch);
char pop();
void postfix(char que[30], int s);



int instack(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 2;
        break;
    case '*':
    case '/':
        return 4;
        break;
    case '^':
        return 5;
        break;
    case '(':
        return 0;
        break;
    case ')':
        return -1;
        break;
    default:
        return 0;
    break;        
    }
};

int incoming(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
        break;
    case '*':
    case '/':
        return 3;
        break;
    case '^':
        return 6;
        break;
    case '(':
        return 9;
        break;
    case ')': return 0;
        break;
    default: return -1;
        break;       
    }
};

int push(char ch)
{
    if(st.top<size)
    {
        st.top+=1;
        st.s[st.top]=ch;
        return 0;
    }
    printf("Stack is full\n");
    return 0;
}

char pop()
{
    if(st.top>-1)
    {
        char ch=st.s[st.top];
        st.top-=1;
        return ch;
    }
    printf("Stack is empty\n");
    return 0;
}

void postfix(char que[30], int s)
{
    char answer[s];
    int k=0;
    for(int i=0;que[i];i++)
    {
        if(incoming(que[i])==-1)
        {
            printf("%c",que[i]);
            answer[k++]=que[i];

        }

        else
        {
            while((st.top!=-1) && (instack(st.s[st.top])>=incoming(que[i])))
            {
               char ch=pop();
               if(instack(ch))
               {
                printf("pop (%c)",ch);
                answer[k++]=ch;
               }
               if(instack(st.s[st.top])==incoming(que[i])){break;}
               
            }           
            if(incoming(que[i]))
            {
                printf("\npush(%c)",que[i]);
                push(que[i]);
            }
            printf("st.top =%d\n",st.top);

        }
    }
    while (st.top!=-1)
    {
       char ch=pop();
       if (instack(ch))
       {
           printf("pop (%c)", ch);
           answer[k++] = ch;
       }
    }
    
    printf("\n");
    printf("postfix expression");
    for (int i = 0; i<k ; i++)
    {
        printf("%c", answer[i]);
    }
    
    
    return ;
}

int main()
{
    char infix[30];
    st.top = -1;
    printf("s.top= %d ",st.top);
    // void postfix(char infix[],int s);
    int s;
    // printf("Enter infix expression size");
    // scanf("%d", &s);
    printf("Enter infix expression");
    scanf("%s", infix);
    s=strlen(infix);
    postfix(infix, s);
    printf("\n");
    for (int i = 0; infix[i]; i++)
    {
        printf("%c", infix[i]);
    }
    return 0;
}


