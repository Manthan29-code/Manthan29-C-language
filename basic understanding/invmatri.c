// programe to find inverse of given matirx
// yet note solved
#include<stdio.h>
#include<conio.h>
#define X 3
#define Y 3
void main(){
     float m[X][Y],t[Y];
     int i,j,k;
     clrscr();
// to take input from user
     for(i=0;i<X;i++){
	 for(j=0;j<Y;j++){
	   printf("\nenter value for a[%d][%d]=",i,j);
	   scanf("%f",&m[i][j]);
	 };
     };

/*     if(m[0][0]==0){
	     for(j=0;j<Y;j++){
	       t[j]=m[0][j];
	       m[0][j]=m[2][j];
	       m[2][j]=t[j];
	     };
     }
     else if(m[0][0]==0 && m[1][0]==0){
	   for(j=0;j<Y;j++){
	       t[j]=m[0][j];
	       m[0][j]=m[2][j];
	       m[2][j]=t[j];
	     };
     }
     else if(m[0][0]==0 && m[2][0]==0){
	   if(m[1][0]==0){
	       printf("\n this is singluar matrix");
	   };
	   for(j=0;j<Y;j++){
	       t[j]=m[0][j];
	       m[0][j]=m[1][j];
	       m[1][j]=t[j];
	   };

     };
     for(i=0;i<X;i++){
	 for(j=0;j<Y;j++){
	      if(m[i][0]!=0){
		 m[i][j]/=m[i][0];
	      };
	      else{
		   break;
	      };
	 };
     };
     for(i=0;i<X-1;i++){
	 for(j=0;j<Y;j++){
	      if(m[i+1][0]!=0){
		 m[i+1][j]-=m[i][j];
	      };
	      else{
		   break;
	      };
	 };
     };
     if(m[1][1]==0){
       for(j=0;j<=Y;j++){
	 t[j]=m[1][j];
	 m[1][j]=m[2][j];
	 m[1][j]=t[j];
       };
     }else if(m[1][1]==0 && m[2][1]==0){
	printf("\n this is singluar matrix");
     };
     for(i=1;i<X;i++){
	 for(j=1;j<Y;j++){
	      if(m[i][1]!=0){
		 m[i][j]/=m[i][1];
	      }
	      else{
		   break;
	      };
	 };
     };
     for(j=1;j<Y;j++){
	if(m[2][j]!=0){
		m[2][j]-=m[1][j];
	};
     };
     if(m[2][2]!=0){
	m[2][2]/=m[2][2];
     }else{
	printf("\n this is singluar matrix");
     };
     for(i=1;i<X;i++){
     k=1;
	for(j=1;j<Y;j++){
	   if(m[i-1][k]!=0){
	      m[i-1][j]-=(m[i-1][k]*m[i][j]);
	   }else{
	      break;
	   };
	};
     k++;
     };
     m[0][2]-=m[0][2]*m[2][2];
     for(i=0;i<X;i++){
	 for(j=0;j<Y;j++){
	   printf("%.2f\t",m[i][j]);
	 };
     printf("\n");
     };
     getch();

}; */
     for(i=0;i<X;i++){
	for(j=0;j<Y;j++){

	};
     };