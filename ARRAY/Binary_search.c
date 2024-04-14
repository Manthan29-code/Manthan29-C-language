
#include<stdio.h>
#define size 5
int main(){
       int a[size],i,j,c,min,max,mid,index=-1,key;
       for(i=0;i<size;i++){
	     printf("\nenter the int value for a[%d]",i);
	     scanf("%d",&a[i]);
       }
      
	   printf("\nthe unsorted array is:");
       
	   for(i=0;i<size;i++){
	       printf("\t%d",a[i]);
       }
      
	   for(i=0;i<size;i++){
	     for(j=0;j<size-1;j++){
		      if(a[j]>a[j+1]){
			     c=a[j];
			     a[j]=a[j+1];
			     a[j+1]=c;
			    }
		       }//end od inner
       } ///end of outer for
      
	   printf("\nThe sorted array is:");
       for(i=0;i<size;i++){
	    printf("%d\t",a[i]);
       }
      
	   printf("\nenter the key value");
       scanf("%d",&key);
       min=0;
       max=size-1;
	   /*------LOGIC OF BINARY-SEARCH-----------*/
       while(min<=max)
	   {
	   		mid=(min+max)/2;
	   		if(a[mid]==key){
	   			index=mid;
	   			goto end;
	  	    }else{
	    	if(key<a[mid]){
		 		max=mid-1;
	    	}else{
	       		min=mid+1;
	     	}
	   		}//end of else
       }//end of while
       end:
       if(index==-1){
	        printf("\nkey value does not exist in this array");
       }else{
	        printf("\nkey value is at %d place",index+1);
       }
       return 0;
}//end of main