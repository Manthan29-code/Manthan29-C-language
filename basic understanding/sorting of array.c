/*           NAME -->MOVALIYA MANTHAN JAGDISHBHAI
	     DOC -->13\6
	     OBJECTIVE --> TO SORT THE ARRAY

 */
#include<stdio.h>
#include<conio.h>
#define size 5
void main(){
      int a[size];
      char d[size];
      int i,j,c,choice;
      clrscr();
      printf("\n1----int");
      printf("\n2----char");
      printf("\n3----exit");
      printf("\nenter your choice");
      scanf("%d",&choice);
      switch(choice){
	  case 1:for(i=0;i<size;i++){
			printf("\nenter the int value for a[%d]",i);
			scanf("%d",&a[i]);
		  }
		printf("\nthe unsorted array is:");
		for(i=0;i<size;i++){
		  printf("\n%d",a[i]);
		}
		for(i=0;i<size;i++){
			for(j=0;j<size-1;j++){
				 if(a[j]>a[j+1]){
					    c=a[j];
					    a[j]=a[j+1];
					    a[j+1]=c;
					    }
				}//end od inner for
			} ///end of outer for
	      printf("\nThe sorted array is:");
		for(i=0;i<size;i++){
		  printf("%d",a[i]);
		}
	  break;
	  case 2:for(i=0;i<size;i++){
			printf("\nenter the char value for d[%d]",i);
			scanf(" %c",&d[i]);
		  }
		printf("\nthe unsorted array is:");
		for(i=0;i<size;i++){
		  printf("\n%c",d[i]);
		}
		for(i=0;i<size;i++){
			for(j=0;j<size-1;j++){
				 if(d[j]>d[j+1]){
					    c=d[j];
					    d[j]=d[j+1];
					    d[j+1]=c;
					    }
				}//end od inner for
			} ///end of outer for
	      printf("\nThe sorted array is:");
		for(i=0;i<size;i++){
		  printf("\n%c",d[i]);
		}
	  break;
	  case 3:exit(0);
	  break;
    }//end of choice
     getch();
}//end  of main
