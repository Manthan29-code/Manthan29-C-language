/*
	       TOPIC--linear searching
            T.C.=> O(N)
*/
#include<stdio.h>
#define size 5
int main(){
     int a[size],i,index,key;
     for(i=0;i<size;i++)
     {
	     printf("\nenter the element for a[%d]",i);
	     scanf("%d",&a[i]);
     }
     printf("\nthe array is as following\n");
     for(i=0;i<size;i++)
     {
	     printf("%d\t",a[i]);
     }
     printf("\nenter the key value");
     scanf("%d",&key);
     for(i=0;i<size;i++)
     {
	     if(key==a[i])
          {
	          index=i;
	          break;
	     }
     }
     if(index==-1)
     {
	     printf("\nsearch unsuccesful");
     }else{
	     printf("\nthe key %d is at %d place",key,index+1);
     }
     return 0;
}