/*                    C LANGUAGE PRESENTATION PROJECT
		      Topic : Arrays and Loops
		      Date  : 08/07/2023
*/
#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COL 3
#define SIZE 5
int main()
{
       int a[SIZE],b[SIZE],c[SIZE],x[ROW][COL],y[ROW][COL],z[ROW][COL];
       int i=0,j=0,k=0,choice1,choice2,choice3;
       start:
       while(1){
       printf("\n 1 : 1D array");
       printf("\n 2 : 2D array");
       printf("\n 3 : EXIT");

       printf("\nPlease enter your choice: ");
       scanf("%d",&choice1);

       switch(choice1){
	       case 1: 
		       printf("\n 4 : For loop");
		       printf("\n 5 : While loop");
		       printf("\n 6 : Do while loop");
		       printf("\n 7 : EXIT");

		       printf("\nPlease enter your choice: ");
		       scanf("%d",&choice2);

		       switch(choice2){
		       case 4 : 
				printf("\n8 : Addition");
				printf("\n9 : Subtraction");
				printf("\n10 : Multiplication");
				printf("\n11 : Division");
				printf("\n12 : EXIT");
				printf("\n 13 : Back to main menu");
				printf("\nPlease enter your choice:");
				scanf("%d",&choice3);
				switch(choice3){

			       case 8 : 
					printf("\nAddition by using for loop:");
					printf("\nThe 1st array is: ");
					for(i=0;i<SIZE;i++){
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					     }
					printf("\nThe 2nd array is: ");
					for(i=0;i<SIZE;i++){
					    printf("\nValue of b[%d]",i);
					    scanf("%d",&b[i]);
					    }
					for(i=0;i<SIZE;i++){
						 c[i]=a[i]+b[i];
						 }
					for(i=0;i<SIZE;i++){
					       printf("\n%d + %d = %d",a[i],b[i],c[i]);
					       }
					       
					       break;
				case 9 : 
					printf("\nSubtraction by using for loop:");
					printf("\nThe 1st array is:");
					for(i=0;i<SIZE;i++){
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					     }
					printf("\nThe 2nd array is:");
					for(i=0;i<SIZE;i++){
					    printf("\nValue of b[%d]",i);
					    scanf("%d",&b[i]);
					    }
					for(i=0;i<SIZE;i++){
						 c[i]=a[i]-b[i];
						 }
					for(i=0;i<SIZE;i++){
					       printf("\n%d - %d = %d",a[i],b[i],c[i]);
					       }
					       
					       break;
				  case 10 : 
					printf("\nMultiplication by using for loop:");
					printf("\nThe 1st array is : ");
					for(i=0;i<SIZE;i++){
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					     }
					printf("\nThe 2nd array is :");
					for(i=0;i<SIZE;i++){
					    printf("\nValue of b[%d]",i);
					    scanf("%d",&b[i]);
					    }
					for(i=0;i<SIZE;i++){
						 c[i]=a[i]*b[i];
						 }
					for(i=0;i<SIZE;i++){
					       printf("\n%d * %d = %d",a[i],b[i],c[i]);
					       }
					       
					       break;
			       case 11 : 

					printf("\nDivision by using for loop:");
					printf("\nThe 1st array is :");
					for(i=0;i<SIZE;i++){
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					     }
					printf("\nThe 2nd array is :");
					for(i=0;i<SIZE;i++){
					    printf("\nValue of b[%d]",i);
					    scanf("%d",&b[i]);
					    }
					for(i=0;i<SIZE;i++){
						 c[i]=a[i]/b[i];
						 }
					for(i=0;i<SIZE;i++){
					       printf("\n%d / %d = %d",a[i],b[i],c[i]);
					       }
					       
					       break;
				case 12: exit(0);
				case 13: goto start;
				      } //end of 1D array's for loop part
	  case 5 : 
		   printf("\n8 : Addition");
		   printf("\n9 : Subtraction");
		   printf("\n10 : Multiplication");
		   printf("\n11 : Division");
		   printf("\n12 : EXIT");
		   printf("\n13 : Back to main menu:");
		   printf("\nPlease enter your choice:");
		   scanf("%d",&choice3);
		   switch(choice3){

			 case 8 : 
					printf("\nAddition by using while loop: ");

					printf("\nThe 1st array is:");
					i=0;      //initialization
					while(i<SIZE)    //condition
					  {
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					     i++;
					  }//end of while loop
					printf("\nThe 2nd array is:");
					i=0;
					while(i<SIZE){
					    printf("\nValue of b[%d]",i);
					    scanf("%d",&b[i]);
					    i++;
					    }
					i=0;
					 while(i<SIZE){
						 c[i]=a[i]+b[i];
						 i++;
						 }
					i=0;
					while(i<SIZE){
					       printf("\n%d + %d = %d",a[i],b[i],c[i]);
					       i++;
					       }
					       
					       break;
				case 9 : 
					printf("\nSubtraction by using while loop: ");

					printf("\nThe 1st array is:");
					i=0;    //initialization
					while(i<SIZE)  //condition
					   {
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					      i++;
					     }//end of while
					printf("\nThe 2nd array is:");
					i=0;
					while(i<SIZE){
					    printf("\nValue of b[%d]",i);
					    scanf("%d",&b[i]);
					   i++;
					    }
					i=0;
					while(i<SIZE){
						 c[i]=a[i]-b[i];
						  i++;
						 }
					i=0;
					while(i<SIZE){
					       printf("\n%d - %d = %d",a[i],b[i],c[i]);
						i++;
						 }
					       
					       break;
				  case 10 : 
					printf("\nMultiplication by using while loop: ");

					printf("\nThe 1st array is: ");
					i=0;        //initialisation
					while(i<SIZE)  //condition
					     {
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					     i++;
					     }//end of while
					printf("\nThe 2nd array is:");
					i=0;
					while(i<SIZE){
					    printf("\nValue of b[%d]",i);
					    scanf("%d",&b[i]);
					    i++;
					    }
					    i=0;
					while(i<SIZE){
						 c[i]=a[i]*b[i];
						 i++;
						 }
					i=0;
					while(i<SIZE){
					       printf("\n%d * %d = %d",a[i],b[i],c[i]);
					     i++;
						}
						
					       break;
			       case 11 : 
					printf("\nDivision by using while loop:");

					printf("\nThe 1st array is:");
					i=0;  //initialization
					while(i<SIZE)  //condition
					    {
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					     i++;
					     }//end of while
					printf("\nThe 2nd array is:");
					i=0;
					while(i<SIZE){
					    printf("\nValue of b[%d]",i);
					    scanf("%d",&b[i]);
					    i++;
					    }
					i=0;
					while(i<SIZE){
						 c[i]=a[i]/b[i];
						 i++;
						 }
					i=0;
					while(i<SIZE){
					       printf("\n%d / %d = %d",a[i],b[i],c[i]);
					       i++;
					       }
					       
					       break;
				case 12: exit(0);
				case 13: goto start;
				    }// end of 1D array's while loop part

       case 6 : 
		   printf("\n8 : Addition");
		   printf("\n9 : Subtraction");
		   printf("\n10 : Multiplication");
		   printf("\n11 : Division");
		   printf("\n12 : EXIT");
		   printf("\n13 : Back to start menu:");
		   printf("\nPlease enter your choice:");
		   scanf("%d",&choice3);
		   switch(choice3){

			 case 8 : 
					printf("\n Addition by using do while loop:");

					printf("\nThe 1st array is:");
					i=0;
					do{
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					     i++;
					     }while(i<SIZE);
					printf("\n 2nd arry:");
					i=0;
					do{
					    printf("\n the values b[%d]",i);
					    scanf("%d",&b[i]);
					    i++;
					    }while(i<SIZE);
					i=0;
					 do{
						 c[i]=a[i]+b[i];
						 i++;
						 }while(i<SIZE);
					i=0;
					do{
					       printf("\n%d + %d = %d",a[i],b[i],c[i]);
					       i++;
					       }while(i<SIZE);
					       
					       break;
				case 9 : 
					printf("\nSubtraction by using do while loop:");

					printf("\nThe 1st array is:");
					i=0;
					do{
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					    i++;
					     }while(i<SIZE);
					printf("\nThe 2nd array is:");
					i=0;
					do{
					    printf("\nValue of b[%d]",i);
					    scanf("%d",&b[i]);
					   i++;
					    }while(i<SIZE);
					i=0;
					do{
						 c[i]=a[i]-b[i];
						  i++;
						 }while(i<SIZE);
					i=0;
					do{
					       printf("\n%d - %d = %d",a[i],b[i],c[i]);
						i++;
						 }while(i<SIZE);
						 
					       break;
				  case 10 : 
					printf("\nMultiplication by using do while loop:");

					printf("\nThe 1st array is:");
					i=0;
					do{
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					     i++;
					     }while(i<SIZE);
					printf("\n 2nd arry:");
					i=0;
					do{
					    printf("\nValue of b[%d]",i);
					    scanf("%d",&b[i]);
					    i++;
					    }while(i<SIZE);
					    i=0;
					do{
						 c[i]=a[i]*b[i];
						 i++;
						 }while(i<SIZE);
					i=0;
					do{
					       printf("\n%d * %d = %d",a[i],b[i],c[i]);
					     i++;
					       }while(i<SIZE);
					       
					       break;
			       case 11 : 
					printf("\nDivision by using do while loop: ");

					printf("\nThe 1st array is:");
					i=0;
					do{
					     printf("\nValue of a[%d]",i);
					     scanf("%d",&a[i]);
					     i++;
					     }while(i<SIZE);//end of scan
					printf("\nThe 2nd array is:");
					i=0;
					do{
					    printf("\nValues of b[%d]",i);
					    scanf("%d",&b[i]);
					    i++;
					    }while(i<SIZE);
					i=0;
					do{
						 c[i]=a[i]/b[i];
						 i++;
						 }while(i<SIZE);
					i=0;
					do{
					       printf("\n%d / %d = %d",a[i],b[i],c[i]);
					       i++;
					       }while(i<SIZE);
					       
					       break;
				case 12: exit(0);
				case 13: goto start;
				    }// end of 1D array's do while loop part
	     case 7 :exit(0);
				    }//end of 1D array

    case 2 :  
	      printf("\n 4 : For loop");
	      printf("\n 5 : While loop");
	      printf("\n 6 :Do while loop");
	      printf("\n 7 : EXIT");

	      printf("\nPlease enter your choice:");
	      scanf("%d",&choice2);
	      switch(choice2){
		 case 4 : 
			  printf("\n 8 : Addition");
			  printf("\n 9 : Subtraction");
			  printf("\n 10 : Multiplication");
			  printf("\n 11 : Division");
			  printf("\n 12 : EXIT");
			  printf("\n 13 : Back to main menu:");

			  printf("\nPlease enter your choice:");
			  scanf("%d",&choice3);

			  switch(choice3){
			    case 8 : 
				     printf("\nAddition by using for loop:");
				     printf("\nThe 1st array is:");
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       }
				    }
				    printf("\nThe 2nd array is:");
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					  }
				    }
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
				       z[j][k]=x[j][k]+y[j][k];
				       }
				     }
				      for(j=0;j<ROW;j++){
				      for(k=0;k<COL;k++){
					   printf("%d\t",z[j][k]);
					   }
					printf("\n");
				    }
				    
				     break;
		      case 9 : 
				     printf("\nSubraction by using for loop:");
				     printf("\nThe 1st array is:");
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       }
				    }
				    printf("\nThe 2nd array is:");
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					  }
				    }
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
				       z[j][k]=x[j][k]-y[j][k];
				       }
				     }
				      for(j=0;j<ROW;j++){
				      for(k=0;k<COL;k++){
					   printf("%d\t",z[j][k]);
					   }
					printf("\n");
				    }
				    
				     break;

		       case 10 : 
				     printf("\nMultiplication by using for loop:");
				     printf("\nThe 1st array is:");
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       }
				    }
				    printf("\nThe 2nd array is:");
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					  }
				    }
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
				       z[j][k]=x[j][k]*y[j][k];
				       }
				     }
				      for(j=0;j<ROW;j++){
				      for(k=0;k<COL;k++){
					   printf("%d\t",z[j][k]);
					   }
					printf("\n");
				    }
				    
				     break;
		     case 11 : 
				     printf("\nDivision by using for loop:");
				     printf("\nThe 1st array is:");
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       }
				    }
				    printf("\nThe 2nd array is:");
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					  }
				    }
				     for(j=0;j<ROW;j++){
				     for(k=0;k<COL;k++){
				       z[j][k]=x[j][k]/y[j][k];
				       }
				     }
				      for(j=0;j<ROW;j++){
				      for(k=0;k<COL;k++){
					   printf("%d\t",z[j][k]);
					   }
					printf("\n");
				    }
				    
				     break;
			 case 12: exit(0);
			 case 13: goto start;

				  }//end of 2D array's for loop part
	  case 5 : 
			  printf("\n 8 : Addition");
			  printf("\n 9 : Subtraction");
			  printf("\n 10 : Multiplication");
			  printf("\n 11 : Division");
			  printf("\n 12 : EXIT");
			  printf("\n 13 : Back to main menu:");

			  printf("\n enter your choice:");
			  scanf("%d",&choice3);

			  switch(choice3){
			    case 8 : 
				     printf("\nAddition by using while loop:");;
				     printf("\nThe 1st array is:");
				     j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       k++;
				       }
				       j++;
				    }
				    printf("\nThe 2nd array is:");
				    j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					 k++;
					  }
					  j++;
				    }
				    j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
				       z[j][k]=x[j][k]+y[j][k];
				       k++;
				       }
				       j++;
				     }
				     j=0;
				     while(j<ROW){
				      k=0;
				      while(k<COL){
					   printf("%d\t",z[j][k]);
					   k++;
					   }
					printf("\n");
					j++;
				    }
				    
				     break;
		 case 9 : 
				     printf("\nSubtraction by using while loop:");
				     printf("\nThe 1st array is:");
				     j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       k++;
				       }
				       j++;
				    }
				    printf("\nThe 2nd array is:");
				    j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					 k++;
					  }
					  j++;
				    }
				    j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
				       z[j][k]=x[j][k]-y[j][k];
				       k++;
				       }
				       j++;
				     }
				     j=0;
				     while(j<ROW){
				      k=0;
				      while(k<COL){
					   printf("%d\t",z[j][k]);
					   k++;
					   }
					printf("\n");
					j++;
				    }
				    
				     break;
	    case 10 : 
				     printf("\nMultiplication by using while loop:");
				     printf("\nThe 1st array is:");
				     j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       k++;
				       }
				       j++;
				    }
				    printf("\nThe 2nd array is:");
				    j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					 k++;
					  }
					  j++;
				    }
				    j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
				       z[j][k]=x[j][k]*y[j][k];
				       k++;
				       }
				       j++;
				     }
				     j=0;
				     while(j<ROW){
				      k=0;
				      while(k<COL){
					   printf("%d\t",z[j][k]);
					   k++;
					   }
					printf("\n");
					j++;
				    }
				    
				     break;
	    case 11 : 
				     printf("\nDivision by using while loop:");
				     printf("\nThe 1st array is:");
				     j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       k++;
				       }
				       j++;
				    }
				    printf("\nThe 2nd array is:");
				    j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					 k++;
					  }
					  j++;
				    }
				    j=0;
				     while(j<ROW){
				     k=0;
				     while(k<COL){
				       z[j][k]=x[j][k]/y[j][k];
				       k++;
				       }
				       j++;
				     }
				     j=0;
				     while(j<ROW){
				      k=0;
				      while(k<COL){
					   printf("%d\t",z[j][k]);
					   k++;
					   }
					printf("\n");
					j++;
				    }
				    
				     break;

			 case 12: exit(0);
			 case 13: goto start;

				  }// end of 2D array's while loop part


	    case 6 : 
			  printf("\n 8 : Addition");
			  printf("\n 9 : Subtraction");
			  printf("\n 10 : Multiplication");
			  printf("\n 11 : Division");
			  printf("\n 12 : EXIT");
			  printf("\n 13 : Back to main menu:");

			  printf("\nPlease enter your choice:");
			  scanf("%d",&choice3);

			  switch(choice3){
			    case 8 : 
				     printf("\nAddition using do while loop:");
				     printf("\nThe 1st array is:");
				     j=0;
				     do{
				     k=0;
				     do{
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       k++;
				       }while(k<COL);
				       j++;
				    }while(j<ROW);
				    printf("\nThe 2nd array is:");
				    j=0;
				     do{
				     k=0;
				     do{
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					 k++;
					  }while(k<COL);
					  j++;
				    }while(j<ROW);
				    j=0;
				     do{
				     k=0;
				     do{
				       z[j][k]=x[j][k]+y[j][k];
				       k++;
				       }while(k<COL);
				       j++;
				     }while(j<COL);
				     j=0;
				     do{
				      k=0;
				      do{
					   printf("%d\t",z[j][k]);
					   k++;
					   }while(k<COL);
					printf("\n");
					j++;
				    }while(j<ROW);
				    
				     break;
		       case 9 : 
				     printf("\nSubtraction by using do while loop:");
				     printf("\nThe 1st array is:");
				     j=0;
				     do{
				     k=0;
				     do{
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       k++;
				       }while(k<COL);
				       j++;
				    }while(j<ROW);
				    printf("\nThe 2nd array is:");
				    j=0;
				     do{
				     k=0;
				     do{
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					 k++;
					  }while(k<COL);
					  j++;
				    }while(j<ROW);
				    j=0;
				     do{
				     k=0;
				     do{
				       z[j][k]=x[j][k]-y[j][k];
				       k++;
				       }while(k<COL);
				       j++;
				     }while(j<COL);
				     j=0;
				     do{
				      k=0;
				      do{
					   printf("%d\t",z[j][k]);
					   k++;
					   }while(k<COL);
					printf("\n");
					j++;
				    }while(j<ROW);
				    
				     break;
	      case 10 : 
				     printf("\nMultiplication by using do while loop:");
				     printf("\nThe 1st array is:");
				     j=0;
				     do{
				     k=0;
				     do{
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       k++;
				       }while(k<COL);
				       j++;
				    }while(j<ROW);
				    printf("\nThe 2nd array is:");
				    j=0;
				     do{
				     k=0;
				     do{
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					 k++;
					  }while(k<COL);
					  j++;
				    }while(j<ROW);
				    j=0;
				     do{
				     k=0;
				     do{
				       z[j][k]=x[j][k]*y[j][k];
				       k++;
				       }while(k<COL);
				       j++;
				     }while(j<COL);
				     j=0;
				     do{
				      k=0;
				      do{
					   printf("%d\t",z[j][k]);
					   k++;
					   }while(k<COL);
					printf("\n");
					j++;
				    }while(j<ROW);
				    
				     break;

		  case 11 : 
				     printf("\nDivision by using do while loop:");
				     printf("\nThe 1st array is:");
				     j=0;
				     do{
				     k=0;
				     do{
				       printf("\nEnter x[%d][%d]",j,k);
				       scanf("%d",&x[j][k]);
				       k++;
				       }while(k<COL);
				       j++;
				    }while(j<ROW);
				    printf("\nThe 2nd array is:");
				    j=0;
				     do{
				     k=0;
				     do{
					  printf("\nEnter y[%d][%d]",j,k);
					  scanf("%d",&y[j][k]);
					 k++;
					  }while(k<COL);
					  j++;
				    }while(j<ROW);
				    j=0;
				     do{
				     k=0;
				     do{
				       z[j][k]=x[j][k]/y[j][k];
				       k++;
				       }while(k<COL);
				       j++;
				     }while(j<COL);
				     j=0;
				     do{
				      k=0;
				      do{
					   printf("%d\t",z[j][k]);
					   k++;
					   }while(k<COL);
					printf("\n");
					j++;
				    }while(j<ROW);
				    
				    break;
	      case 12: exit(0);
	      case 13: goto start;
		} // end of 2D array's do while part
		case 7 : exit(0);
			     }//end of 2D array
	case 3: exit(0);
			}//end of 1st switch case containing 1D and 2D array options



       
       }//end of while(1) loop
	   return 0;
}// end of main