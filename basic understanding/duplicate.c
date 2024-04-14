/*
WAP to find total numbe of duplicate element in array
*/
#include<stdio.h>

int main()
{
      int a[25],i,j,n,sum=0;
      printf("\nEnter the size of array=");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
	    printf("\nEnter the value for a[%d]=",i);
	    scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
          for(j=i;j<n-1;j++)
          {
	        if(a[i]==a[j+1])
            {
	            sum=sum+1;
                break;
	        }
         }   
      }
      printf("\nthe number of duplicate element is=%d",sum);
      return 0;

}//end of main