/*
		  topic-->matrix multiplication
*/
#include<stdio.h>
#include<conio.h>

int main()
{
      int a[3][3],b[3][3],c[3][3]={0},i,j,k;
      printf("\nenter the value for first matrix");
      for(i=0;i<3;i++)
	  {
	    for(j=0;j<3;j++)
		{
	       printf("\na[%d][%d]=",i,j);
	       scanf("%d",&a[i][j]);
	    }
      }
      printf("\nenter the value for second matrix");
      for(i=0;i<3;i++)
	  {
	    for(j=0;j<3;j++)
		{
	       printf("\nb[%d][%d]=",i,j);
	       scanf("%d",&b[i][j]);
	    }
      }
      //multiplication of matrix   T.C=>o(n^3)
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
	  	  for(k=0;k<3;k++){
	    	c[i][j]=c[i][j] +(a[i][k]*b[k][j]);
	      }//end of k
	    }//end of j
      }//end of i
      printf("\nenter the value of matrix after multiplication is:\n");
      for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
	       printf("%d\t",c[i][j]);
	    }
        printf("\n");
      }
	  return 0;
}//end of main
