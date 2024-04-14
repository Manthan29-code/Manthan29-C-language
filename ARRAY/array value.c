
/*       
          name--movaliya manthan jagdishbhai
*/
#include<stdio.h>
int main(){
  int i,a1[50],a2[50],n;
  printf("\n enter the size of array=");
  scanf("%d",&n);
  printf("\n enter %d value for array",n);
  
  for(i=0;i<n;i++){
   printf("\na1[%d]=",i);
   scanf("%d",&a1[i]);
  }
  
  for(i=0;i<n;i++){
   a2[i]=a1[i];
  }
  
  printf("\n the values enter by user is:");
  
  for(i=0;i<n;i++){
   printf("\na2[%d]%d",i,a2[i]);
  }
 
  return 0;
}