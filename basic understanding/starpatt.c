#include<stdio.h>
#include<conio.h>

void main(){
    int i,j;
    clrscr();
    for(i=1;i<=6;i++){
       if(i==1 || i==6){
	   for(j=1;j<=6;j++){
		  printf("#");
	   }
	 }else{
	    for(j=1;j<=6;j++){
		   if(j==1 || j==6){
		     printf("#");
		   }else{
		    printf(" ");
		   }
	     }
	 }//end of else
	 printf("\n");
       }//end of for i
   getch();
}