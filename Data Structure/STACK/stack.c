#include<stdio.h>
#define size 10
int stack[size];
int peak=-1;
void push(int num);
void pop();
void peep();
void display();
void change();
int main()
{
      while(1)
      {
            int choice;
            int num;
            printf("1) push\n");
            printf("2) pop\n");
            printf("3) peep\n");
            printf("4) change\n");
            printf("5) display\n");
            printf("6) exit\n");
            printf("Enter your choice\n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                        printf("Enter number :");
                        scanf("%d",&num);
                        push(num);
                break;
                case 2:
                        pop();
                break;
                case 3:
                        peep();
                break;
                case 4:
                        change();
                break;
                case 5:
                        display();
                break;
                case 6:
                         return 0;
                break; 
                default:
                         printf("\ninvalide choice");
                break;       
            }

        }
            return 0;
}
void push(int num)
{
    if(peak<size)
    {
        peak++;
        stack[peak]=num;
    }
    else
    {
       printf("stack is full\n");
       return;

    }
    return ;
}

void pop()
{
    if(peak<size && peak>=0)
    {
        printf("%d\n",stack[peak]);
        peak--;

    }
    else
    {
       printf("stack is empty\n");
       return;
    }
    return ;
}

void peep()
{
    if(peak<size && peak>=0)
    {
        printf("%d\n",stack[peak]);
        
    }
    else
    {
       printf("stack is empty\n");
       return;
    }
    return ;
}

void change()
{
    int ind,value;
    display();
    printf("\nenter the index value which you want to change");
    scanf("%d", &ind);
    printf("\nEnter new value");
    scanf("%d", &value);
    stack[ind]=value;
}

void display()
{
    int i;
    if(peak>=0)
    {
        for(i=0;i<=peak;i++)
        {
            printf("%d\t",stack[i]);

        }
        printf("\n");
    }
    else{
        printf("Empty!!!!!");
    }
}