/*
		     NAME-->MOVALIYA MANTHAN JAGDISHBHAI
		     DOC-->19/6
		     TOPIC-->TO LEARN UDF

*/
#include<stdio.h>
void add();
int sub(int x,int y);
void mult(int x,int y);
int div();
int main(){
     int choice,a,b,ans;
     printf("\n1----add");
     printf("\n2----sub");
     printf("\n3----mult");
     printf("\n4----div");
     printf("\n5----exit");
     printf("\nenter your choinc:");
     scanf("%d",&choice);
     switch(choice){
	    case 1:add();
		   break;
	    case 2:ans=sub(4,7);
		   printf("\nthe answer is %d",ans);
		   break;
	    case 3:printf("\nenter the value od a and b");
		   scanf("%d%d",&a,&b);
		   mult(a,b);
		   break;
	    case 4:ans=div();
		   printf("%d",ans);
		   break;
	    case 5:exit(0);

     }//end of switch
     return 0;
}
void add(){
  int a,b,c;
  printf("\nenter the value of a and b");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("\nthe addition is:%d",c);
}
int sub(int x,int y){
  int z;
  z=x-y;
  return z;
}
void mult(int x,int y){
  int c;
  c=x*y;
  printf("\ntha value of %d",c);

}
int div(){
    int a,b,c;
    printf("\nEnter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a/b;
    return c;
}