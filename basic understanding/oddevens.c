/*
		      NAME-->Manthan Movaliya J.
		      DOC-->20/6

*/
#include<stdio.h>
#include<conio.h>
void main(){
    int n1,n2,odd=0,even=0,i;
    clrscr();
    printf("\nenter the first number:");
    scanf("%d",&n1);
    printf("\nenter the second number:");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++){
     if(i%2==0){
       even+=i;
     }else{
       odd+=i;
     }
    }
    printf("\nthe sum of even on is=%d",even);
    printf("\nthe sum of odd no is=%d",odd);
    getch();
}
