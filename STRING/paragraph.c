/*
		 TOPIC->string function with paragraph
*/
#include<stdio.h>
#include<string.h>
int main(){
    char par[300];
    int i,len,vowles=0,space=0;
    printf("\nEnter te pargraph:\n");
    gets(par);
    len=strlen(par);
    printf("%d",len);
    strupr(par);
    for(i=0;i<len;i++)
    {
      if(par[i]=='A'||par[i]=='E'||par[i]=='I'||par[i]=='O'||par[i]=='U'){
       vowles++;
      }else if(par[i]==' '){
       space++;
      }
    }
    printf("\nnoumber of vowels in this paragraph is %d",vowles);
    printf("\nnoumber of consonants in this paragraph is %d",len-vowles-space);
    return 0;
}
