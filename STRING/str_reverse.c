//TOPIC-->manualy reverse string
#include<stdio.h>
#include<string.h>
int main()
{
     char name[30],name1[30];
     int i,j=0,len;
     printf("\nenter the string;");
     gets(name);
     len=strlen(name);
     for(i=len-1;i>=0;i--)
     {
       name1[j]=name[i];
       j++;
     }
     name1[j]='\0';
     printf("\n the reverse of %s is %s",name,name1);
     return 0;
}