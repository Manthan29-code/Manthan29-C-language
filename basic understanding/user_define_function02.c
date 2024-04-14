/*
		      NAME-->Manthan Movaliya J.
		      DOC-->20/6

*/
#include<stdio.h>
void factorial();//declaration
void factorial_(int x);
void main(){
    int choice,f;
    clrscr();
    start:
    printf("\n1--->without avrgument");
    printf("\n2--->with avrgument");
    printf("\n3-->exit");
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch(choice){
	   case 1:factorial();
	   break;
	   case 2:printf("\nenter the int number");
		  scanf("%d",&f);
		  factorial_(f);
	   break;
	   case 3:exit(0);
    }//end of choice
    getch();
    goto start;
}
void factorial(){//defination
    int i,f=1,n;
    printf("\nenter the int no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
	f*=i;
    }//end of for
   printf("\nfactroial of given no. is %d",f);
}
void factorial_(int x){//defination
    int i,f=1;
    for(i=1;i<=x;i++){
	f*=i;
    }//end of for
   printf("\nfactroial of given no. is %d",f);
}

