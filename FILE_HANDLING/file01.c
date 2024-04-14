//learn about file handling
#include<stdio.h>

int main()
{
    FILE *fp;         // FILE is data type which used to handle pointer to operate file 
    char name[30],a[20];
    printf("\n Enter the string");
    gets(a);     // to read string including white space(tab)
    printf("well come\n %s",a);

    fp=fopen("man.txt","w");// w to open file in writing mode
    fprintf(fp,"%s",a);      // function used to write in file
    fclose(fp);

    fp=fopen("man.txt","r");// r to open file in reading mode
    fscanf(fp,"%s",name);     // this function will stor information in name variable
    printf("\n The string in man.txt file is;\n %s",name);
    fclose(fp);

    // another mmethod to read data from file
    char ch;
    fp=fopen("man.txt","r");
    while((ch=getc(fp))!=EOF)
    {
	     printf("%c",ch);      
    }
    fclose(fp);
    return 0;
}