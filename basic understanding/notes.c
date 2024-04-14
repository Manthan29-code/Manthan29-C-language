//              name-- MOVALIYA MANTHAN J.
#include<stdio.h>
#include<conio.h>

void main(){
  int A,n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
  clrscr();
  printf("\nenter the amount=");
  scanf("%d",&A);
  n2000=A/2000;
  printf("\n2000-->%d",n2000);
  A=A-2000*n2000;

  n500=A/500;
  printf("\n500-->%d",n500);
  A=A-500*n500;

  n200=A/200;
  printf("\n200-->%d",n200);
  A=A-200*n200;

  n100=A/100;
  printf("\n100-->%d",n100);
  A=A-100*n100;

  n50=A/50;
  printf("\n50-->%d",n50);
  A=A-50*n50;

  n20=A/20;
  printf("\n20-->%d",n20);
  A=A-20*n20;

  n10=A/10;
  printf("\n10-->%d",n10);
  A=A-10*n10;

  n5=A/5;
  printf("\n5-->%d",n5);
  A=A-5*n5;

  n2=A/2;
  printf("\n2-->%d",n2);
  A=A-2*n2;

  n1=A;
  printf("\n1-->%d",n1);
  getch();
}