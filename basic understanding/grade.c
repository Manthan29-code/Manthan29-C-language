// WAP to decide grade
#include<stdio.h>
#include<conio.h>

void main(){
  int a,b,c,d,e;
  float m;
  clrscr();
  printf("\nenter the marks  of physics=");
  scanf("%d",&a);
  printf("\nenter the marks of chemistry=");
  scanf("%d",&b);
  printf("\nenter the marks of maths=");
  scanf("%d",&c);
  printf("\nenter the marks of biology=");
  scanf("%d",&d);
  printf("\nenter the marks of computer=");
  scanf("%d",&e);
  m=(a+b+c+d+e)/5;
  printf("\nyour percentage is=%f",m);
  if(m>=90){
    printf("\nGrade A");
  }else if(m>=80){
    printf("\nGrade B");
  }else if(m>=70){
    printf("\nGrade C");
  }else if(m>=60){
    printf("\nGrade D");
  }else if(m>=40){
    printf("\nGrade E");
  }else{
    printf("\nGrade F");
  }
  getch();
}