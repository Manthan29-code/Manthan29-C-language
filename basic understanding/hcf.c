//WAP to find HCF of given number

#include<stdio.h>
int main(){
    int i,n,n1,n2,sum=0;
    printf("\n enter the first num; ");
    scanf("%d",&n1);
    printf("\n enter the second num; ");
    scanf("%d",&n2);
    if(n1>n2)
    {
      n=n2;
    }else
    {
      n=n1;
    }
    printf("\n the hcf of %d and %d is=",n1,n2);
    for(i=1;i<=n;i++)
    {
      if((n1%i==0) && (n2%i==0))
      {
	       sum=i;
      }
    }
    printf("%d",sum);
    return 0;
}