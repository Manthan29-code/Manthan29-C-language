/*
		   Name->Movaliya Manthan Jagdishbhai
		   Doc->7\7
		   Topic-->Stdunt structur file
*/
#include<stdio.h>
//#include<conio.h>  it is not necessery for vscode
#define size 10
/*struct Student{
       char name[25];
       int sid,maths,eng,computer,total;
}s[size];                  struct student  declaration      */

void main(){
     int i,a;
     char ch;
     FILE *file;  //file pointer declaration
/*	 printf("\nEnter the number of the student");
	 scanf("%d",&n);
     file=fopen("students.txt","a");  //append mode
     for(i=0;i<n;i++)
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
       for(i=0;i<n;i++)// to print data in file
	 {
	  fprintf(file,"\nStudent %d Details",i+1);
	  fprintf(file,"\nName: %s\tSID:- %d",s[i].name,s[i].sid);
	  fprintf(file,"\nMarks\nMaths\tEnglish\tComputer:\n%d\t%d\t%d",s[i].maths,s[i].eng,s[i].computer);
	  fprintf(file,"\nTotal Marks=%d",s[i].total);
	  fprintf(file,"\n");
	 }
	 fclose(file);  //end of write mode*/
	 file=fopen("students.txt","r");    //open in read mode
	 if(file==NULL)
	  {
	    printf("\nError in opening file!");
	    goto end;
	  }
	  start:
	  while((ch=getc(file))!=EOF){
		  if(ch=='#')
		  {
			printf("\nDo you want to print more detali from file");
			printf("\n If yes then enter 0 otherwise 1");
			scanf("%d",&a);
			  if(a==0){
                  goto start;
			  }else{
				 goto end;
			  };
			  
		  }
		  else
		  {
	      printf("%c",ch);
		  };
	  }
	  end:
	  fclose(file);// end fo read mode of "student.txt"
}//end of main

