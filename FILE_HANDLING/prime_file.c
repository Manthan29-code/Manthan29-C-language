// creat prime.txt file and print prime number between rang given by user

#include<stdio.h>

int main(){
    FILE *fp1;
    int n1,i,n2,no,j;
    char ch;   
    printf("\n Enter the value for n1 and n2 for range");
    scanf("%d %d",&n1,&n2);
    /*   if((n1*n2)<0){
	 exit(0);
    }   */
    fp1=fopen("prime.txt","w");
    for(i=n1;i<=n2;i++)
    {
       for(j=1;j<=i;j++)
       {
	      if(i%j==0)
        {
	        no++;
	      }
       }//end of inner for
       if(no==2)
       {
	        fprintf(fp1,"%d\n",i);
       }
      no=0;
    }//end ofouter for
    fclose(fp1);

    printf("\n prime number are:\n");
    fp1=fopen("prime.txt","r");
    while((ch=getc(fp1))!=EOF)
    {
      printf("%c",ch);
    }
    fclose(fp1);
    return 0;
}
