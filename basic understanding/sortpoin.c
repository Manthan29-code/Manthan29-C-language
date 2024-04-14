/*               NAME---Movaliya Manthan J.
		 DOC--3\6
		 toic--sorting and searching by using pointer
*/
#include<stdio.h>
#include<conio.h>
#define size 5
void main(){
     int a[size],ch,i,j,ti,index=-1;
     int *y;
     char b[size],*x,tch;
     while(1){
     clrscr();
     y=a;
     x=b;
     printf("\n1---sorting with integer");
     printf("\n2---sorting with character");
     printf("\n3---searching with integer");
     printf("\n4---searching with character");
     printf("\n5---EXIT");
     printf("\nEnter your choice");
     scanf("%d",&ch);
     switch(ch){
	 case 1:for(i=0;i<size;i++){
		    printf("\nEnter the value for a[%d]",i);
		    scanf("%d",(y+i));
		}//scaning
		for(i=0;i<size-1;i++){
		    for(j=i+1;j<size;j++){
		       if(*(y+i)>(*(y+j))){
			    ti= *(y+i);
			    *(y+i)= (*(y+j));
			    *(y+j)=ti;
		       }//end of if
		    }//end of inner loop
		}//end of outer loop
		printf("\n The sorted array is:\n");
		for(i=0;i<size;i++){
		    printf("%d\t",*(y+i));
		}//printing
		break;// end of case 1
	 case 2:for(i=0;i<size;i++){
		    printf("\nEnter the character for b[%d]",i);
		    scanf(" %c",(x+i));
		}//scaning
		for(i=0;i<size-1;i++){
		    for(j=i+1;j<size;j++){
		       if(*(x+i)>(*(x+j))){
			    tch=*(x+i);
			    *(x+i)=(*(x+j));
			    *(x+j)=tch;
		       }//end of if
		    }//end of inner loop
		}//end of outer loop
		printf("\n The sorted array is:\n");
		for(i=0;i<size;i++){
		    printf("%c\t",*(x+i));
		}//printing
		break;// end of case 1
	 case 3:for(i=0;i<size;i++){
		    printf("\nEnter the value for a[%d]",i);
		    scanf("%d",(y+i));
		}//scaning
		printf("\nEnter the key value:");
		scanf("%d",&ti);
		for(i=0;i<size;i++){
		   if(*(y+i)==(ti)){
		     index=i;
		     break;
		   }
		}
		if(index==-1){
		    printf("\nelement not find");
		}else{
		    printf("\nelement found at a[%d]",i);
		}
		break;
	 case 4:for(i=0;i<size;i++){
		    printf("\nEnter the char for a[%d]",i);
		    scanf(" %c",(x+i));
		}//scaning
		printf("\nEnter the key character:");
		scanf(" %c",&tch);
		for(i=0;i<size;i++){
		   if(*(x+i)==tch){
		     index=i;
		   //  break;
		   }
		}
		if(index==-1){
		    printf("\nelement not find");
		}else{
		    printf("\nelement found at b[%d]",index);
		}
		break;
	 case 5:exit(0);
     }//end of switch
    getch();
    }//end of while(1)
}//end of main