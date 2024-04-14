/*
   TOPIC-->merge ELEMENT of ARRAY in descending order
*/
#include<stdio.h>
#include<conio.h>

int main(){
      int a[25],i,j,n1,n2,b[25],c[25],d;
      printf("\nEnter the size of first array=");
      scanf("%d",&n1);
      for(i=0;i<n1;i++)
      {
	   printf("\nEnter the value for a[%d]=",i);
	   scanf("%d",&a[i]);
      }
      printf("\nEnter the size of second array=");
      scanf("%d",&n2);
      for(i=0;i<n2;i++)
      {
	   printf("\nEnter the value for b[%d]=",i);
	   scanf("%d",&b[i]);
      }
      for(i=0;i<n1;i++)
      {
         c[i]=a[i];
      }//merge first array
      
      for(i=0;i<n2;i++)
      {
         c[i+(n1)]=b[i];
      }//merge of second array
      
      printf("\nmerged array:\n");
      for(i=0;i<(n1+n2);i++)
      {
         printf("%d\t",c[i]);
      }
      printf("\nmerged arrey in descending order:\n");
      for(i=0;i<(n1+n2-1);i++){
       for(j=i+1;j<(n1+n2);j++){
	  if(c[i]<=c[j]){
		 d=c[i];
		 c[i]=c[j];
		 c[j]=d;
	  }
       }//end of inner for
      }//end of outer for
      for(i=0;i<(n1+n2);i++){
       printf("%d\t",c[i]);
      }
      return 0;
}//end of main