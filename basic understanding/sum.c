//7/7 question 1 sum of harmonic series

#include<stdio.h>
int main(){
    int i,n,a=1,sum=0,finalsum=0;
    printf("\n enter the integer num;");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     sum+=a;
     if(i<n){
	printf("%d + ",sum);
     }else{
	printf("%d=",sum);
     }
     finalsum+=sum;
     a*=10;
    }
    printf("%d",finalsum);
    return 0;
}//end of main