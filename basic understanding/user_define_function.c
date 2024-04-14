/*
		      NAME-->Manthan Movaliya J.
		      DOC-->20/6
*/
#include<stdio.h>

void pattern();//declaration
int main(){
    clrscr();
    pattern();//calling
    
}
void pattern(){//defination
    int n,i,j;
    printf("\nenter the number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
       printf("%d ",i);
      }
      printf("\n");
    }
}
