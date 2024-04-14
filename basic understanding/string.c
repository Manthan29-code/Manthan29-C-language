/*
   demonstrate  use inbuilt function of string.h
*/
#include<stdio.h>
#include<string.h>

int main(){
    char *copy_str;
    char name[30],name1[30];
    int len,x;


    // to take input
    printf("\nEnter the first name:");
   // scanf("%s",name);   // scanf is not able to treat space as a part of string  so...
    gets(name);            // we use gets() which consider space as a part of string
    printf("\nEnter the second name:");
   // scanf("%s",name1);
    gets(name1);

    // Display string entered bu the user
    printf("\nThe first string is %s",name);
    printf("\nThe second string is %s",name1);

    // to reverse string
    strrev(name);
    printf("\n reverse of the first string is %s",name);


    // to find length of string
    len=strlen(name);
    printf("\nThe lenght 0f first string is %d",len);
    len=strlen(name1);
    printf("\nThe lenght 0f second string is %d",len);


    // to compair string
    x=strcmp(name,name1);
    if(x==0){
       printf("\n%s and %s are equal",name,name1);
    }else{
       printf("\n%s and %s are not equal",name,name1);
       printf("\nValue of x is %d",x);
    }

    // case conversion  lower <==> upper
    strlwr(name);
    printf("\n the lower case of name is %s ",name);
    strupr(name1);
    printf("\n the upper case of name1 is %s ",name1);

   // to concate string
    strcat(name,name1);
    printf("\nAfter the concated the name string is ");
    puts(name);  // to print content of string

    // to copy string 
    strcpy(copy_str,name1);
    printf("\ncopied string is ");
    puts(copy_str);

    //to find first occurrence in string
    // it also returns reference to first occurrence of chr 
    // for last occurrence you can use strrchr
    if(strchr(copy_str,'M'))
    {
      printf("\nM is present in string ");
    }

    //to find sub string in given string
    // it also returns reference to first occurrence of substring 
    if(strstr(copy_str,"MANTH"))
    {
      printf("\nsubstring MANTHAN found in given string");      
    }
   return 0;
}