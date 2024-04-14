/*

		   NAME-->MOVALIYA MANTHAN JAGDISHBAHI
		   D0C-->14\6
		   TOPIC-->UNIQUE ELEMENT

*/
#include<stdio.h>

int main(){
     int a[25],i,j,n,sum,k;
     printf("\nEnter the size of an array=");
     scanf("%d",&n);
      
	 for(i=0;i<n;i++)
	 {
	 	printf("\nEnter the value for a[%d]=",i);
	 	scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
	 {
	   printf("\n%d",a[i]);
     }
     
	 printf("\n unique elelments:\n ");
     for(i=0;i<n;i++)
	 {
       sum=0;
	   for(j=0,k=n;j<k;j++)
	   {
	    if(i!=j){
	       if(a[i]==a[j]){
	           sum++;
	    }
	    }
	   }
	   if(sum==0){
	        printf("%d\t",a[i]);
	    }
     }
	 return 0;
}//end of main