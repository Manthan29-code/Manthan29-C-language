#include<stdio.h>


void fun(int *a,int *b);
int main()
{
     int c=10;
     int d=12;
     printf("Befor function call\n");
     printf("Value of c is %d and d is %d\n",c,d);
     fun(&c,&d); 
     printf("after function call\n");
     printf("Value of c is %d and d is %d\n",c,d);
}
void fun(int *a,int *b)
{   
   int *temp;
   /*temp=*(a);
   *(a)=*(b);
   *(b)=temp;*/
    temp=a;
    a=b;
    b=temp;
}