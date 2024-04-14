//student structure file
#include<stdio.h>
struct Student{
       char name[50];
       int std;
       char address[100];
       };                 //end of struct student

int main(){
     int i;
     char ch;
     FILE *file;  //file declaration
     struct Student students[3];   //struct declaration in void
     file=fopen("students.txt","w");  //write mode
     if(file==NULL)   //if no data is found
    {
	  printf("\nError in opening file!");
	  return 0;  
    }
// ot take input from user
    for(i=0;i<3;i++)
	{
	  printf("\nEnter the details of student :"); 
	  printf("\nName: ");           
	  scanf("%s",students[i].name);
	  printf("\nStd: ");
	  scanf("%d",&students[i].std);
	  printf("\nAddress: ");
	  scanf("%s",students[i].address);
	  printf("\n");
    }
// to write data in file	
    for(i=0;i<3;i++)
	{
	  fprintf(file,"\nStudent %d Details",i+1);
	  fprintf(file,"\nName: %s",students[i].name);
	  fprintf(file,"\nStd: %d",students[i].std);
	  fprintf(file,"\nAddress: %s",students[i].address);
	  fprintf(file,"\n");       //fprintf is used for printing in txt file
	}
	 
	fclose(file);  //end of write mode

/*------------------READ DATA FROM FILE-------------------*/	
	file=fopen("students.txt","r");    //starting of read mode
	if(file==NULL)
	{
	    printf("\nError in opening file!");
	    return;    
	}
    /*
	while(fgets(a,sizeof(a),file)!=NULL) 
	//get string ; a, sizeof a,file; scans this condition until file does not get null
	{
	  printf("%s",a);    //to print string of character array
	}
	fclose(file); //end of read mode
	*/
	while((ch=getc(file))!=EOF){
		printf("%c",ch);
	}
    return 0;
}//end of main

