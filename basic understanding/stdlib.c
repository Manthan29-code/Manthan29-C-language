/*
			 name -->movaliya manthan j.
			   PRIME NOUMBER

*/
#include<stdio.h>
#include<conio.h>
void main(){
    int num,i,n=0;
    clrscr();
    printf("\nEnter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
     if(num%i==0){
       n++;
     }
    }//end of for
    if(n==2){
     printf("\n %d is  a prime noumber" ,num);
    }else{
     printf("\n %d is not a prime noumber",num);
    }
    getch();
}