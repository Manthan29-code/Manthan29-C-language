#include<stdio.h>
#define SIZE 10 
int queue[SIZE];
int front=-1;
int rear=-1;

void push(int value)
{
    if(is_full()){
        printf("\nOVERFLOW");
        return;
    }
    if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        queue[front]=value;
        return;
    }
    
    queue[++rear]=value;

}

void pop()
{
    if(is_empty()){
        printf("\nUNDERFLOW");
        return;
    }
    if(front==rear)
    {
        printf("\n%d",queue[front]);
        front=-1;
        front=-1;
        return ;
    }
    printf("\n%d",queue[front]);
    front++;   
}

void display()
{
    if(is_empty()){
        printf("\nUNDERFLOW");
        return;
    }
    int i=front;
    while(i<=rear)
    {
        printf("%d\t",queue[i++]);
    };
    printf("\n");
    
}

int is_full()
{
    return rear==SIZE-1;
}

int is_empty()
{
    return front==-1  && rear==-1;
}

int main()
{
    int choice;
    int value;
    
    while (1) // Infinite loop to keep showing the menu until exit
    {
        printf("\nMenu:");
        printf("\n1) push");
        printf("\n2) pop");
        printf("\n3) Display");
        printf("\n4) Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter the value");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;  // Exit the program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}