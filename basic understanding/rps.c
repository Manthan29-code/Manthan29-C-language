/*
			 name -->movaliya manthan j.
			   ROCK PAPER SCISER GAME

*/
#include<stdio.h>
#include<stdlib.h>
void main(){
   int i,num,ch,computer=0,score=0,round;
   printf("\n1--for rouck");
   printf("\n2--for paper");
   printf("\n3--for sciser");
   printf("\nEnter the no of round");
   scanf("%d",&round);
   for(i=1;i<=round;i++)
   {
	  printf("\nEnter your choice:");
	  scanf("%d",&ch);
	  num=rand()%3+1;
	  printf("\n You choose no %d and computer choose no %d so...",ch,num);
	  if((num==1 && ch==2)||(num==2 && ch==3)||(num==3 && ch==1)){
	    printf("\nYOU WIN");
	    score++;
	  }else if(num==ch){
	    printf("\nboth choose same choice so try again");
	  }else{
	    printf("\nCOMPUTER WIN");
	    computer++;
	  }
   }//end of for
   printf("\nRESULT");
   printf("\nscore of computer=%d",computer);
   printf("\nyour score=%d",score);
   if(score==computer){
       printf("\ngame tie");
   }else if(score>computer){
       printf("\nYOU ARE WINNER OF THIS GAME");
   }else{
      printf("\n COMPUTER IS THE WINNER OF THIS GAME");
   }
   return 0;
}