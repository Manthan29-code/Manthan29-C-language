/*      
           NAME -->MOVALIYA MANTHAN JAGDISHBHAI
	     DOC -->13\6
	     OBJECTIVE --> TO SORT THE 2DARRAY

 */
#include<stdio.h>
#define row 3
#define col 3
int main(){
      int a[row][col],i,j,b[row*col],k=0,c;
      
      for(i=0;i<row;i++){
	
      for(j=0;j<col;j++){
	  printf("\nEnter the value for a[%d][%d]=",i,j);
	  scanf("%d",&a[i][j]);
	}//end of inner for
      }//end of outer for
      
      printf("\nThe unsorted array is:\n");
      
      for(i=0;i<row;i++){
	for(j=0;j<col;j++){
	  printf("%d\t",a[i][j]);
	}//end of inner for
	printf("\n");
      }//end of outer for
      
      //conversion of 2darray into 1d array   
      for(i=0;i<row;i++){
       for(j=0;j<col;j++){
	 b[k]=a[i][j];
	 k++;
       }
      }
      printf("\n1d array=");
      for(i=0;i<(row*col);i++){
	printf("%d\t",b[i]);
      }
    
     //sorting of 1d array      
      for(i=0;i<row*col-1;i++){
	for(j=i+1;j<row*col;j++){
	 if(b[i]>b[j]){
	    c=b[i];
	    b[i]=b[j];
	    b[j]=c;
	 }
	}//end of inner for
      }//end of outer for
      
      //conversion od 1d array into 2d array
      k=0;
      for(i=0;i<row;i++){
       for(j=0;j<col;j++){
	 a[i][j]=b[k];
	 k++;
       }
      }
     
      printf("\nsorted 2d array:\n ");
      for(i=0;i<row;i++){
	for(j=0;j<col;j++){
	 printf("%d\t",a[i][j]);
	}
	printf("\n");
      }
     return 0;
}//end  of main
