/*
      make a programe to manage data of employ using structure
      data--> name, EID, pf,salary, tax, allowance , netsalary
      action:- enter data
               display data
               clcculate salary
               update data
               delete data

*/
#include<stdio.h>
#define size 5
struct employ{
  int eid,flag;
  char name[10];
  float pf,salary,tax,allow,netsal;
}s[size];
void scan();
void display();
void calcnetsal(int i);
int search();
void update();
void del();
int  main()
{
    int choice,id;
    while(1)
    {
      printf("\n1-->scan");
      printf("\n2-->display");
      printf("\n3-->update");
      printf("\n4-->search");
      printf("\n5-->del");
      printf("\n6-->exit");
      printf("\n enter your choice");
      scanf("%d",&choice);
       
      switch(choice)
      {
	         case 1:scan();
	         break;
	         case 2:display();
	         break;
	         case 3:update();
	         break;
	         case 4:id=search();
	         	if(id!=-1)
               {
	         	   printf("\nRecorde found at %d",id +1);
	         	}else
               {
	         	   printf("\nRecorde not found");
	         	}
	         break;
	         case 5:del();
	         break;
	         case 6:exit(0);
      }
   }
   return 0;      
}
void scan(){
   float temp;
   int i;
   for(i=0;i<size;i++)
   {
         printf("\nEnter the value of edi name  pf salary tax allow for s[%d]:",i);
         scanf("%d",&s[i].eid);
         scanf("%s",s[i].name);
         scanf("%f",&temp);
         s[i].pf=temp;
         scanf("%f",&temp);
         s[i].salary=temp;
         scanf("%f",&temp);
         s[i].tax=temp;
         scanf("%f",&temp);
         s[i].allow=temp;
         calcnetsal(i);
         s[i].flag=1;
   }
}// end of scan


void calcnetsal(int i){
   s[i].netsal=(s[i].salary-s[i].pf-s[i].tax+s[i].allow);
} //end of calcnextsel


void display(){
   int i;
   printf("\neid\tname\tpf\tsalary\ttax\tallow\tnetsal\n");
   for(i=0;i<size;i++){
     if(s[i].flag==1){
	   printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",s[i].eid,s[i].name,s[i].pf,s[i].salary,s[i].tax,s[i].allow,s[i].netsal);
     }
   }
}// end of display
int search(){
   int id,i;
   printf("\nEnter the eid which you want to search");
   scanf("%d",&id);
    for(i=0;i<size;i++)
    {
	      if(s[i].eid==id)
         {
	         return i;
	      }
    }
    return -1;
}//end of search


void update()
{
    int id= -1,choice;
    float marks;
    id=search();
    if(id== -1)
    {
       printf("\nRecord not found");
    }else
    {
	   printf("\n1--update pf");
	   printf("\n2--update salary");
	   printf("\n3--update tax");
	   printf("\n4--update allow");
	   printf("\nEnter your choice");
	   scanf("%d",&choice);
	   switch(choice){
	       case 1:printf("\nenter new pf");
	   	        scanf("%f",&marks);
	   	        s[id].pf=marks;
	   	        calcnetsal(id);
	       break;
	       case 2:printf("\nenter new slary");
	   	       scanf("%f",&marks);
	   	       s[id].salary=marks;
	   	       calcnetsal(id);
	   	break;
	      case 3:printf("\nenter new tax");
	   	       scanf("%f",&marks);
	   	       s[id].tax=marks;
	   	       calcnetsal(id);
	      break;
	      case 4:printf("\nenter new allow");
	   	       scanf("%f",&marks);
	   	       s[id].allow=marks;
	   	       calcnetsal(id);
	      break;
	   }
    }
}
void del()
{
  int id=-1;
  id=search();
  if(id==-1)
  {
    printf("\n Record not found");
  }else{
    s[id].flag=-1;
  }
  return 0;
}
