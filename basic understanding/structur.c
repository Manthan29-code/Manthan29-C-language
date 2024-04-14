/*
	     name -->MOVALIYA MANTHAN JAGDISHBHAI
	     DOC->6\7\2023
	     topic--->structur(for make marksheet of students)

*/
#include<stdio.h>
#define size 3
struct student{
  int SID,flag;
  char name[10],grade;
  float fees,maths,eng,physics,total,per;
}s[size];
void scan();                    //declaration of all function
void display();
void calculategrade(int i);
int search();
void update();
void del();
int main(){
   int choice,id;
   while(1){
    printf("\n1-->scan");
    printf("\n2-->display");
    printf("\n3-->update");
    printf("\n4-->search");
    printf("\n5--->del");
    printf("\n6-->exit");
    printf("\n enter your choice");
    scanf("%d",&choice);
    switch(choice){          // calling fo function by using switch case
	 case 1:scan();
	 break;
	 case 2:display();
	 break;
	 case 3:update();
	 break;
	 case 4:id=search();
		if(id!=-1){
		   printf("\nRecorde found at %d",id+1);
		}else{
		   printf("\nRecorde not found");
		}
	 break;
	 case 5:del();
	 break;
	 case 6:exit(0);
   }
   }   //end of while 1
}
void scan(){          //defination of scan function
   float temp;
   int i;
   for(i=0;i<size;i++){
   printf("\nEnter the value of sid name  fees marks of maths eng. phy. for s[%d]:",i+1);
   scanf("%d",&s[i].SID);
   scanf("%s",s[i].name);
   scanf("%f",&temp);
   s[i].fees=temp;
   scanf("%f",&temp);
   s[i].maths=temp;
   scanf("%f",&temp);
   s[i].eng=temp;
   scanf("%f",&temp);
   s[i].physics=temp;
   calculategrade(i);
   s[i].flag=1;
   }
}// end of scan

void calculategrade(int i){            //defination of calculategrade function
   s[i].total=(s[i].maths+s[i].eng+s[i].physics);
   s[i].per=s[i].total/3;
   if(s[i].per>=90){
      s[i].grade='A';
   }else if(s[i].per>=80){
      s[i].grade='B';
   }else{
     s[i].grade='C';
   }
} //end of calculategrade

void display(){                 //defination of display function
   int i;
   printf("\nSID\tname\tfees\tmaths\tenglish\tphysics\ttotal\tper\tgrade\n");
   for(i=0;i<size;i++){
       if(s[i].flag==1){
		printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",s[i].SID,s[i].name,s[i].fees,s[i].maths,s[i].eng,s[i].physics,s[i].total,s[i].per,s[i].grade);
       }
   }
}// end of display

int search(){          //defination of search function
    int id,i;
    printf("\nEnter the sid which you want to search");
    scanf("%d",&id);
    for(i=0;i<size;i++){
	 if(s[i].SID==id){
	    return i;
	 }
    }
    return -1;
}//end of search

void update(){             //defination of update function
    int id= -1,choice;
    float marks;
    id=search();
    if(id== -1){
       printf("\nRecord not found");
    }else{
	 printf("\n1--update maths marks");
	 printf("\n2--update english marks");
	 printf("\n3--update physics marks");
	 printf("\nEnter your choice");
	 scanf("%d",&choice);
	 switch(choice){
	     case 1:printf("\nenter new maths marks");
	 	   scanf("%f",&marks);
	 	   s[id].maths=marks;
	 	   calculategrade(id);
	 	   break;
	     case 2:printf("\nenter new english marks");
	 	   scanf("%f",&marks);
	 	   s[id].eng=marks;
	 	   calculategrade(id);
	 	   break;
	     case 3:printf("\nenter new physics marks");
	 	   scanf("%f",&marks);
	 	   s[id].physics=marks;
	 	   calculategrade(id);
	 	   break;
	 }//end of choice
     }// end of else
}//end of update

void del(){            //defination of delete function
  int id=-1;
  id=search();
  if(id==-1){
    printf("\n Record not found");
  }else{
    s[id].flag=-1;
  }
}//end of del
