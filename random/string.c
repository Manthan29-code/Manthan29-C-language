#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Manthan";
    char s2[]="Movaliya";
    char s3[]="geek";
    
    strcat(s1,s2);
    strcat(s1,s3);
    printf("String after concatenaation is\n");
    puts(s1);
    puts(s2);
    return 0;
}