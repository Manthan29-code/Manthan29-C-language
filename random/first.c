/*

		   NAME-->MOVALIYA MANTHAN JAGDISHBAHI
		   D0C-->14\6
		   TOPIC-->DUPLICATE ELEMENT

*/
#include<stdio.h>


int main(){
      int a[25],i,j,n,sum=0;
      printf("\nEnter the size of array=");
      scanf("%d",&n);
      for(i=0;i<n;i++){
	 printf("\nEnter the value for a[%d]=",i);
	 scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++){
       for(j=i;j<n-1;j++){
	  if(a[i]==a[j+1]){
	      sum=sum+1;
	  }
       }//end of inner for
      }//end of outer for
      printf("\nthe number of duplicate element is=%d",sum);

      return 0;
}//end of main