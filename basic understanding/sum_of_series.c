//WAP to calculate sum of  series
// 1 + 11 + 111 + ... up to n 

#include<stdio.h>
int main(){
    int i,n,a=1;
    unsigned int sum=0, finalsum=0;
    printf("\n enter the integer num;");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
          sum+=a;
          if(i<n)
          {
	        printf("%u + ",sum);
          }else
          {
	        printf("%u=",sum);
          }
          finalsum+=sum;
          a*=10;
    }
    printf("%u",finalsum);
    return 0;
}