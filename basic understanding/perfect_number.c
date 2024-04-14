//Wap to find perfect number

#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("\n enter the integer num; ");
    scanf("%d",&n);
    printf("\n the divisor are;");
    for(i=1;i<n;i++)
    {
      if(n%i==0){
	      printf("%d\t",i);
	      sum+=i;
      }
    }
    printf("\nsum of divisor are %d so",sum);
    if(sum==n){
      printf(" it is perfect number ");
    }else{
     printf(" it is not perfect number ");
    }
    return 0;
}//end of main