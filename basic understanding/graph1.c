#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
    int gd=0,gm;
    int i,k;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    for(i=0;i<=50;i++){
	 if((i+1)%5==0){
	     k+=1;
	 }
       circle(100+i,200+i,50+k);
    }
    getch();
    closegraph();
}
