// make a programe to store information of laptop
// use structure 
#include<stdio.h>
#define size 3
struct laptop{
   int pid,RAM,ROM,prize;
   char company[10],model[10],stortyp[3];

}l[size];
void scan();
void display();
int  main(){
    int choice,id;
    while(1){
    clrscr();
    printf("\n1-->scan");
    printf("\n2-->display");
    printf("\n3-->exit");
    printf("\n enter your choice");
    scanf("%d",&choice);
    switch(choice){
	 case 1:scan();
	 break;
	 case 2:display();
	 break;
	 case 6:exit(0);
    }
    
   }   //end of while 1
}
void scan(){
   int i;
   for(i=0;i<size;i++){
   printf("\nEnter the productid company model RAM ROM storgetype and prize for l[%d]:",i);
   scanf("%d",&l[i].pid);
   scanf("%s",l[i].company);
   scanf("%s",l[i].model);
   scanf("%d",&l[i].RAM);
   scanf("%d",&l[i].ROM);
   scanf("%s",l[i].stortyp);
   scanf("%d",&l[i].prize);

   }
}// end of scan
void display(){
   int i;
   printf("\nproductid\tcompany\tmodel\tRAM\tROM\tstorgetype\tprize\n");
   for(i=0;i<size;i++){
	   printf("\n%d\t%s\t%s\t%d\t%d\t%s\t%d",l[i].pid,l[i].company,l[i].model,l[i].RAM,l[i].ROM,l[i].stortype,l[i].prize);
   }
}// end of display