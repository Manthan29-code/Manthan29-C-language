#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("vovels.txt","w");
    fp2=fopen("smaplecon.txt","w");
    while((ch=getchar())!='\n'){
	 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
	      putc(ch,fp1);
	 }else{
	      putc(ch,fp2);
	 }
    }
    fclose(fp1);
    fclose(fp2);
    printf("\n This is the vowles\n");
    fp1=fopen("vovels.txt","r");
    while((ch=getc(fp1))!=EOF){
       printf("%c",ch);
    }
    fclose(fp1);
    printf("\n This is the cosotant\n");
    fp2=fopen("smaplecon.txt","r");
    while((ch=getc(fp2))!=EOF){
       printf("%c",ch);
    }
    fclose(fp2);
     return 0;
}