//              name-- MOVALIYA MANTHAN J.
#include<stdio.h>
#include<conio.h>

void main(){
  int a,b,c;
  clrscr();
  printf("\nenter the cost prize=");
  scanf("%d",&a);
  printf("\nenter the selling prize=");
  scanf("%d",&b);
  c=b-a;
  if(c>=0){
    printf("\nprofit is=%d",c);
  }else{
    printf("\nloss is=%d",-c);
  }
  getch();
}