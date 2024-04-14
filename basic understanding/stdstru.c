/*
		   Name->Movaliya Manthan Jagdishbhai
		   Doc->7\7
		   Topic-->Stdunt structur file
*/
#include<stdio.h>
#include<conio.h>
#define size 3
struct Student{
       char name[25];
       int sid,maths,eng,computer,total;
}s[size];                 // struct student  declaration

void main(){
     int i;
     char ch;
     FILE *file;  //file declaration
     clrscr();
     file=fopen("students.txt","w");  //write mode
     for(i=0;i<3;i++)
	  {
	  printf("\nEnter the details of student :");
	  printf("\nName:");
	  scanf("%s",s[i].name);
	  printf("\nSID:");
	  scanf("%d",&s[i].sid);
	  printf("\nMarks");
	  printf("\nMaths");
	  scanf("%d",&s[i].maths);
	  printf("\nEnglish");
	  scanf("%d",&s[i].eng);
	  printf("\nComputer");
	  scanf("%d",&s[i].computer);
	  s[i].total=s[i].maths+s[i].eng+s[i].computer;
	  printf("\n");
       }
       for(i=0;i<3;i++)// to print data in file
	 {
	  fprintf(file,"\nStudent %d Details",i+1);
	  fprintf(file,"\nName: %s\tSID:-%d",s[i].name,s[i].sid);
	  fprintf(file,"\nMarks\nMaths\tEnglish\tComputer:\n%d\t%d\t%d",s[i].maths,s[i].eng,s[i].computer);
	  fprintf(file,"\nTotal Marks=%d",s[i].total);
	  fprintf(file,"\n");
	 }
	 fclose(file);  //end of write mode
	 clrscr();
	 file=fopen("students.txt","r");    //starting of read mode
	 if(file==NULL)
	  {
	    printf("\nError in opening file!");
	    return;
	  }
	  while((ch=getc(file))!=EOF){
	      printf("%c",ch);
	  }
	  fclose(file);// end fo read mode
	  getch();
}//end of main

