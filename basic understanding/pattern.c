#include<stdio.h>


int main()
{
    int a,i,j,s=1;
    printf("\nenter the number for row:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      for(j=1;j<=i;j++)
      {
	      if(s==1)
        {
	        printf("%d",s);
	        s=0;
	      }else
        {
	        printf("%d",s);
	        s=1;
	      }
      }
      printf("\n");
    }
    return 0;
}
