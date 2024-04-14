//manualy concating of string
#include<stdio.h>
#include<string.h>
int main(){
     char name[30],name1[30];
     int i,j=0,len1,len2;
     printf("\nenter the string1 and string 2:");
     gets(name);
     gets(name1);
     len1=strlen(name);
     len2=strlen(name1);
     for(i=len1;i<=(len1 +len2);i++)
     {
       name[i]=name1[j];
       j++;
     }
     name[i]='\0';
     printf("\n the concated string is %s",name);
     return 0;