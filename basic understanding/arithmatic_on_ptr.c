// topic---> learn about pointer
//,perform possible arithmatic operation with pointer
#include<stdio.h>
int main(){
     int a[10],b[10],c[10],i,choice;
     int *y,*x,*z;
     while(1)
	 {
     	x=a; // or x=&a[0];
     	y=b; // or y=&b[0];
     	z=c; // or z=&c[0];
     	printf("\n1---add");
     	printf("\n2---sub");
     	printf("\n3---mul");
     	printf("\n4---div");
     	printf("\n5---- END");
     	printf("\nEnter your choice");
     	scanf("%d",&choice);
        switch(choice){
	        case 1:for(i=0;i<5;i++)
			       {
		               printf("\nEnter the value for a[%d]",i);
		               scanf("%d",x+i);// or ,&a[i]
		           }
		           for(i=0;i<5;i++)
				   {
		                printf("\nEnter the value for b[%d]",i);
		                scanf("%d",y+i);// or ,&b[i]
		           }
		          for(i=0;i<5;i++)
				  {
		               *(z+i)=*(x+i)+*(y+i);
		          }
	              for(i=0;i<5;i++)
				  {
		               printf("\n%d-------%u",*(z+i),(z+i));
	              }
	              break;

	        case 2:for(i=0;i<5;i++)
				   {
		      		   printf("\nEnter the value for a[%d]",i);
		      		   scanf("%d",x+i);// or ,&a[i]
		           }
		           for(i=0;i<5;i++)
				   {
		                printf("\nEnter the value for b[%d]",i);
		                scanf("%d",y+i);// or ,&b[i]
		           }
		           for(i=0;i<5;i++)
				   {
		                *(z+i)=*(x+i)-*(y+i);
		           }
		           for(i=0;i<5;i++)
				   {
						printf("\n%d-------%u",*(z+i),(z+i));
		           }
					break;
	 		case 3:for(i=0;i<5;i++)
				   {
		      			printf("\nEnter the value for a[%d]",i);
		     			scanf("%d",x+i);// or ,&a[i]
				   }
		            for(i=0;i<5;i++){
		                printf("\nEnter the value for b[%d]",i);
		                scanf("%d",y+i);// or ,&b[i]
		            }
		            for(i=0;i<5;i++)
					{
		                *(z+i)=*(x+i)*(*(y+i));
		            }
		            for(i=0;i<5;i++)
					{
		                printf("\n%d-------%u",*(z+i),(z+i));
		            }
		            break;
			case 4:for(i=0;i<5;i++)
				   {
		               printf("\nEnter the value for a[%d]",i);
		               scanf("%d",x+i);// or ,&a[i]
		           }
		           for(i=0;i<5;i++)
				   {
		                printf("\nEnter the value for b[%d]",i);
		                scanf("%d",y+i);// or ,&b[i]
		           }
		           for(i=0;i<5;i++)
				   {
		                *(z+i)=*(x+i)/(*(y+i));
		           }
		           for(i=0;i<5;i++)
				   {
		                printf("\n%d-------%u",*(z+i),(z+i));
		           }
		           break;
			case 5: exit(0);
      }//end of switch
	  
     }//end of while(1)
	 return 0;
}