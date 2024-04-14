/* 
    WAP a program to  check wheater charactrer enter by  user is 
    1)number
    2)alphaabet
    3)special character
*/
   
#include<stdio.h>
int main()
{
  char ch;
  printf("enter the character--");
  scanf("%c",&ch);
  if(ch>=65 && ch<=90){
     printf("\nupper case character");
  }else if(ch>=97 && ch<=122){
     printf("\nlower case character");
  }else{
    printf("\nthis is not a alphabet");
  }
  return 0;
}