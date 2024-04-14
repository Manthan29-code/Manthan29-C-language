/*
		   NAME--> MOVALIYA MANTHAN JAGDISHBAHI
		   D0C-->9/6
		   SUBJECT--> ARRAY PROJECT

*/
#include<stdio.h>
#include<conio.h>


void main(){
     int D,L,O,H,i,j;
     int a[3],b[3],c[3];
     int d[3][3],e[3][3],f[3][3];
     clrscr();
     printf("\n1---1D array");
     printf("\n2---2D array");
     printf("\n3---exit");
     printf("\nenter your choice");
     scanf("%d",&D);
     switch(D){
	case 1:
		printf("\n1----for loop");
		printf("\n2---while loop");
		printf("\n3----do while loop");
		printf("\nchoose the loop");
		scanf("%d",&L);
		printf("\n5----addition");
		printf("\n7---subtraction");
		printf("\n11----multiplicaton");
		printf("\n13---division");
		printf("\nchoose the operation");
		scanf("%d",&O);
		H=L*O;
		switch(H){
		   case 5:
			   printf("\nenter the value for first array");
			   for(i=0;i<3;i++){
			    printf("\na[%d]",i);
			    scanf("%d",&a[i]);
			   }
			   printf("\nenter the value for second array");
			   for(i=0;i<3;i++){
			    printf("\nb[%d]",i);
			    scanf("%d",&b[i]);
			   }
			   for(i=0;i<3;i++){
			    c[i]=a[i]+b[i];
			   }
			   clrscr();
			   for(i=0;i<3;i++){
			    printf("%d + %d = %d\n",a[i],b[i],c[i]);
			   }
		   break;//end of case 5
		   case 7:
			   printf("\nenter the value for first array");
			   for(i=0;i<3;i++){
			    printf("\na[%d]",i);
			    scanf("%d",&a[i]);
			   }
			   printf("\nenter the value for second array");
			   for(i=0;i<3;i++){
			    printf("\nb[%d]",i);
			    scanf("%d",&b[i]);
			   }
			   for(i=0;i<3;i++){
			    c[i]=a[i]-b[i];
			   }
			   clrscr();
			   for(i=0;i<3;i++){
			    printf("%d - %d = %d\n",a[i],b[i],c[i]);
			   }
		   break;//end of case 7
		   case 11:
			   printf("\nenter the value for first array");
			   for(i=0;i<3;i++){
			    printf("\na[%d]",i);
			    scanf("%d",&a[i]);
			   }
			   printf("\nenter the value for second array");
			   for(i=0;i<3;i++){
			    printf("\nb[%d]",i);
			    scanf("%d",&b[i]);
			   }
			   for(i=0;i<3;i++){
			    c[i]=a[i]*b[i];
			   }
			   clrscr();
			   for(i=0;i<3;i++){
			    printf("%d * %d = %d\n",a[i],b[i],c[i]);
			   }
		   break;//end of case 11
		   case 13:
			   printf("\nenter the value for first array");
			   for(i=0;i<3;i++){
			    printf("\na[%d]",i);
			    scanf("%d",&a[i]);
			   }
			   printf("\nenter the value for second array");
			   for(i=0;i<3;i++){
			    printf("\nb[%d]",i);
			    scanf("%d",&b[i]);
			   }
			   for(i=0;i<3;i++){
			    c[i]=a[i]/b[i];
			   }
			   clrscr();
			   for(i=0;i<3;i++){
			    printf("%d / %d = %d\n",a[i],b[i],c[i]);
			   }
		   break;//end of case 13
		   case 10:
			    printf("\nenter the value for first array");
			    i=0;
			    while(i<3){
			     printf("\na[%d]",i);
			     scanf("%d",&a[i]);
			     i++;
			    }
			    printf("\nenter the value for second array");
			    i=0;
			    while(i<3){
			     printf("\nb[%d]",i);
			     scanf("%d",&b[i]);
			     i++;
			    }
			    i=0;
			    while(i<3){
			    c[i]=a[i]+b[i];
			    i++;
			    }
			    i=0;
			    while(i<3){
			     printf("%d + %d =%d\n",a[i],b[i],c[i]);
			     i++;
			    }
		   break;//end of case 10
		   case 14:
			    printf("\nenter the value for first array");
			    i=0;
			    while(i<3){
			     printf("\na[%d]",i);
			     scanf("%d",&a[i]);
			     i++;
			    }
			    printf("\nenter the value for second array");
			    i=0;
			    while(i<3){
			     printf("\nb[%d]",i);
			     scanf("%d",&b[i]);
			     i++;
			    }
			    i=0;
			    while(i<3){
			    c[i]=a[i]-b[i];
			    i++;
			    }
			    i=0;
			    while(i<3){
			     printf("%d - %d =%d\n",a[i],b[i],c[i]);
			     i++;
			    }
		   break;//end of case 14
		   case 22:
			    printf("\nenter the value for first array");
			    i=0;
			    while(i<3){
			     printf("\na[%d]",i);
			     scanf("%d",&a[i]);
			     i++;
			    }
			    printf("\nenter the value for second array");
			    i=0;
			    while(i<3){
			     printf("\nb[%d]",i);
			     scanf("%d",&b[i]);
			     i++;
			    }
			    i=0;
			    while(i<3){
			    c[i]=a[i]*b[i];
			    i++;
			    }
			    i=0;
			    while(i<3){
			     printf("%d * %d =%d\n",a[i],b[i],c[i]);
			     i++;
			    }
		   break;//end of case 22
		   case 26:
			    printf("\nenter the value for first array");
			    i=0;
			    while(i<3){
			     printf("\na[%d]",i);
			     scanf("%d",&a[i]);
			     i++;
			    }
			    printf("\nenter the value for second array");
			    i=0;
			    while(i<3){
			     printf("\nb[%d]",i);
			     scanf("%d",&b[i]);
			     i++;
			    }
			    i=0;
			    while(i<3){
			    c[i]=a[i]/b[i];
			    i++;
			    }
			    i=0;
			    while(i<3){
			     printf("%d / %d =%d\n",a[i],b[i],c[i]);
			     i++;
			    }
		   break;//end of case 26
		   case 15:
			    printf("\nenter the value for first array");
			    i=0;
			    do{
			      printf("\na[%d]",i);
			      scanf("%d",&a[i]);
			      i++;
			    }while(i<3);
			    printf("\nenter the value for second array");
			    i=0;
			    do{
			      printf("\na[%d]",i);
			      scanf("%d",&b[i]);
			      i++;
			    }while(i<3);
			    i=0;
			    do{
			      c[i]=a[i]+b[i];
			      i++;
			    }while(i<3);
			    i=0;
			    do{
			      printf("%d + %d=%d\n",a[i],b[i],c[i]);
			      i++;
			    }while(i<3);
		   break;//end of case 15
		   case 21:
			    printf("\nenter the value for first array");
			    i=0;
			    do{
			      printf("\na[%d]",i);
			      scanf("%d",&a[i]);
			      i++;
			    }while(i<3);
			    printf("\nenter the value for second array");
			    i=0;
			    do{
			      printf("\na[%d]",i);
			      scanf("%d",&b[i]);
			      i++;
			    }while(i<3);
			    i=0;
			    do{
			      c[i]=a[i]-b[i];
			      i++;
			    }while(i<3);
			    i=0;
			    do{
			      printf("%d - %d=%d\n",a[i],b[i],c[i]);
			      i++;
			    }while(i<3);
		   break;//end of case 21
		   case 33:
			    printf("\nenter the value for first array");
			    i=0;
			    do{
			      printf("\na[%d]",i);
			      scanf("%d",&a[i]);
			      i++;
			    }while(i<3);
			    printf("\nenter the value for second array");
			    i=0;
			    do{
			      printf("\na[%d]",i);
			      scanf("%d",&b[i]);
			      i++;
			    }while(i<3);
			    i=0;
			    do{
			      c[i]=a[i]*b[i];
			      i++;
			    }while(i<3);
			    i=0;
			    do{
			      printf("%d * %d=%d\n",a[i],b[i],c[i]);
			      i++;
			    }while(i<3);
		   break;//end of case 33
		   case 39:
			    printf("\nenter the value for first array");
			    i=0;
			    do{
			      printf("\na[%d]",i);
			      scanf("%d",&a[i]);
			      i++;
			    }while(i<3);
			    printf("\nenter the value for second array");
			    i=0;
			    do{
			      printf("\na[%d]",i);
			      scanf("%d",&b[i]);
			      i++;
			    }while(i<3);
			    i=0;
			    do{
			      c[i]=a[i]/b[i];
			      i++;
			    }while(i<3);
			    i=0;
			    do{
			      printf("%d / %d=%d\n",a[i],b[i],c[i]);
			      i++;
			    }while(i<3);
		   break;//end of case 39
		}//end of switch H for case 1
	break;//end of 1D array
	case 2:
		printf("\n1----for loop");
		printf("\n2---while loop");
		printf("\n3----do while loop");
		printf("\nchoose the loop");
		scanf("%d",&L);
		printf("\n5----addition");
		printf("\n7---subtraction");
		printf("\n11----multiplicaton");
		printf("\n13---division");
		printf("\nchoose the operation");
		scanf("%d",&O);
		H=L*O;
		switch(H){
		   case 5: printf("\nenter the value for first array");
			   printf("\n");
			   for(i=0;i<3;i++){
			     for(j=0;j<3;j++){
			      printf("\td[%d][%d]=",i,j);
			      scanf("%d",&d[i][j]);
			     }
			     printf("\n");
			   }
			   printf("\nenter the value for second array");
			   printf("\n");
			   for(i=0;i<3;i++){
			    for(j=0;j<3;j++){
			      printf("\te[%d][%d]=",i,j);
			      scanf("%d",&e[i][j]);
			    }
			    printf("\n");
			   }
			   for(i=0;i<3;i++){
			    for(j=0;j<3;j++){
			     f[i][j]=d[i][j]+e[i][j];
			    }
			   }
			   clrscr();
			   for(i=0;i<3;i++){
			     for(j=0;j<3;j++){
			    printf("%d + %d = %d\t",d[i][j],e[i][j],f[i][j]);
			    }
			    printf("\n");
			   }
		     break;// end of case 5
		     case 7: printf("\nenter the value for first array");
			   printf("\n");
			   for(i=0;i<3;i++){
			     for(j=0;j<3;j++){
			      printf("\td[%d][%d]=",i,j);
			      scanf("%d",&d[i][j]);
			     }
			     printf("\n");
			   }
			   printf("\nenter the value for second array");
			   printf("\n");
			   for(i=0;i<3;i++){
			    for(j=0;j<3;j++){
			      printf("\te[%d][%d]=",i,j);
			      scanf("%d",&e[i][j]);
			    }
			    printf("\n");
			   }
			   for(i=0;i<3;i++){
			    for(j=0;j<3;j++){
			     f[i][j]=d[i][j]-e[i][j];
			    }
			   }
			   clrscr();
			   for(i=0;i<3;i++){
			     for(j=0;j<3;j++){
			    printf("%d - %d = %d\t",d[i][j],e[i][j],f[i][j]);
			    }
			    printf("\n");
			   }
		     break;// end of case 7
		     case 11: printf("\nenter the value for first array");
			   printf("\n");
			   for(i=0;i<3;i++){
			     for(j=0;j<3;j++){
			      printf("\td[%d][%d]=",i,j);
			      scanf("%d",&d[i][j]);
			     }
			     printf("\n");
			   }
			   printf("\nenter the value for second array");
			   printf("\n");
			   for(i=0;i<3;i++){
			    for(j=0;j<3;j++){
			      printf("\te[%d][%d]=",i,j);
			      scanf("%d",&e[i][j]);
			    }
			    printf("\n");
			   }
			   for(i=0;i<3;i++){
			    for(j=0;j<3;j++){
			     f[i][j]=d[i][j]*e[i][j];
			    }
			   }
			   clrscr();
			   for(i=0;i<3;i++){
			     for(j=0;j<3;j++){
			    printf("%d * %d = %d\t",d[i][j],e[i][j],f[i][j]);
			    }
			    printf("\n");
			   }
		     break;// end of case 11
		     case 13: printf("\nenter the value for first array");
			   printf("\n");
			   for(i=0;i<3;i++){
			     for(j=0;j<3;j++){
			      printf("\td[%d][%d]=",i,j);
			      scanf("%d",&d[i][j]);
			     }
			     printf("\n");
			   }
			   printf("\nenter the value for second array");
			   printf("\n");
			   for(i=0;i<3;i++){
			    for(j=0;j<3;j++){
			      printf("\te[%d][%d]=",i,j);
			      scanf("%d",&e[i][j]);
			    }
			    printf("\n");
			   }
			   for(i=0;i<3;i++){
			    for(j=0;j<3;j++){
			     f[i][j]=d[i][j]/e[i][j];
			    }
			   }
			   clrscr();
			   for(i=0;i<3;i++){
			     for(j=0;j<3;j++){
			    printf("%d / %d = %d\t",d[i][j],e[i][j],f[i][j]);
			    }
			    printf("\n");
			   }
		     break;// end of case 13
		     case 15:printf("\nenter the value for first array");
			     printf("\n");
			     i=0;
			    do{
			       j=0;
			      do{
				  printf("\td[%d][%d]=",i,j);
				  scanf("%d",&d[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
			    printf("\nenter the value for second array");
			    printf("\n");
			     i=0;
			    do{
			       j=0;
			      do{
				  printf("\te[%d][%d]=",i,j);
				  scanf("%d",&e[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
			    i=0;
			    do{
			       j=0;
			      do{
				  f[i][j]=d[i][j]+e[i][j];
				  j++;
			      }while(j<3);
			     i++;
			    }while(i<3);
			    clrscr();
			    i=0;
			    do{
			       j=0;
			      do{
				  printf("%d + %d= %d\t",d[i][j],e[i][j],f[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
		     break;//end of case 15
		     case 21:printf("\nenter the value for first array");
			     printf("\n");
			     i=0;
			    do{
			       j=0;
			      do{
				  printf("\td[%d][%d]=",i,j);
				  scanf("%d",&d[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
			    printf("\nenter the value for second array");
			    printf("\n");
			     i=0;
			    do{
			       j=0;
			      do{
				  printf("\te[%d][%d]=",i,j);
				  scanf("%d",&e[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
			    i=0;
			    do{
			       j=0;
			      do{
				  f[i][j]=d[i][j]-e[i][j];
				  j++;
			      }while(j<3);
			     i++;
			    }while(i<3);
			    clrscr();
			    i=0;
			    do{
			       j=0;
			      do{
				  printf("%d - %d= %d\t",d[i][j],e[i][j],f[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
		     break;//end of case 21
		     case 33:printf("\nenter the value for first array");
			     printf("\n");
			     i=0;
			    do{
			       j=0;
			      do{
				  printf("\td[%d][%d]=",i,j);
				  scanf("%d",&d[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
			    printf("\nenter the value for second array");
			    printf("\n");
			     i=0;
			    do{
			       j=0;
			      do{
				  printf("\te[%d][%d]=",i,j);
				  scanf("%d",&e[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
			    i=0;
			    do{
			       j=0;
			      do{
				  f[i][j]=d[i][j]*e[i][j];
				  j++;
			      }while(j<3);
			     i++;
			    }while(i<3);
			    clrscr();
			    i=0;
			    do{
			       j=0;
			      do{
				  printf("%d * %d= %d\t",d[i][j],e[i][j],f[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
		     break;//end of case 33
		     case 39:printf("\nenter the value for first array");
			     printf("\n");
			     i=0;
			    do{
			       j=0;
			      do{
				  printf("\td[%d][%d]=",i,j);
				  scanf("%d",&d[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
			    printf("\nenter the value for second array");
			    printf("\n");
			     i=0;
			    do{
			       j=0;
			      do{
				  printf("\te[%d][%d]=",i,j);
				  scanf("%d",&e[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
			    i=0;
			    do{
			       j=0;
			      do{
				  f[i][j]=d[i][j]/e[i][j];
				  j++;
			      }while(j<3);
			     i++;
			    }while(i<3);
			    clrscr();
			    i=0;
			    do{
			       j=0;
			      do{
				  printf("%d / %d= %d\t",d[i][j],e[i][j],f[i][j]);
				  j++;
			      }while(j<3);
			      printf("\n");
			     i++;
			    }while(i<3);
		     break;//end of case 39
		     case 10:printf("\nenter the value for first array");
			     printf("\n");
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("\td[%d][%d]=",i,j);
				  scanf("%d",&d[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
			     printf("\nenter the value for seconr array");
			     printf("\n");
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("\te[%d][%d]=",i,j);
				  scanf("%d",&e[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				   f[i][j]=d[i][j]+e[i][j];
				  j++;
			       }
			       i++;
			     }
			     clrscr();
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("%d + %d= %d\t",d[i][j],e[i][j],f[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
		     break;//end of case 10
		     case 14:printf("\nenter the value for first array");
			     printf("\n");
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("\td[%d][%d]=",i,j);
				  scanf("%d",&d[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
			     printf("\nenter the value for seconr array");
			     printf("\n");
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("\te[%d][%d]=",i,j);
				  scanf("%d",&e[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				   f[i][j]=d[i][j]-e[i][j];
				  j++;
			       }
			       i++;
			     }
			     clrscr();
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("%d - %d= %d\t",d[i][j],e[i][j],f[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
		     break;//end of case 14
		     case 22:printf("\nenter the value for first array");
			     printf("\n");
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("\td[%d][%d]=",i,j);
				  scanf("%d",&d[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
			     printf("\nenter the value for seconr array");
			     printf("\n");
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("\te[%d][%d]=",i,j);
				  scanf("%d",&e[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				   f[i][j]=d[i][j]*e[i][j];
				  j++;
			       }
			       i++;
			     }
			     clrscr();
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("%d * %d= %d\t",d[i][j],e[i][j],f[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
		     break;//end of case 22
		     case 26:printf("\nenter the value for first array");
			     printf("\n");
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("\td[%d][%d]=",i,j);
				  scanf("%d",&d[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
			     printf("\nenter the value for seconr array");
			     printf("\n");
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("\te[%d][%d]=",i,j);
				  scanf("%d",&e[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				   f[i][j]=d[i][j]/e[i][j];
				  j++;
			       }
			       i++;
			     }
			     clrscr();
			     i=0;
			     while(i<3){
				j=0;
			       while(j<3){
				  printf("%d / %d= %d\t",d[i][j],e[i][j],f[i][j]);
				  j++;
			       }
			       printf("\n");
			       i++;
			     }
		     break;//end of case 26
		}//end of switch H for case 2
	break;//end of 2D array
	case 3:exit(0);
     }//end of switch D
     getch();
}//end of main
