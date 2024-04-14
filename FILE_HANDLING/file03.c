// learn about use of getch(),putc()

#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    int n1,i;
    char ch;
    clrscr();
    printf("\n Enter the value for n1 for range");
    scanf("%d",&n1);
    fp1=fopen("even.txt","w");
    fp2=fopen("odd.txt","w");
    for(i=1;i<=n1;i++){
       if(i%2==0){
	 putc(i,fp1);
	// fprintf(fp1,"%d",i);
       }else{
	fprintf(fp2,"%d ",i);
       }
    }//end of for
    fclose(fp1);
    fclose(fp2);
    printf("\n even number are: ");
    fp1=fopen("even.txt","r");
    while((n1=getc(fp1))!=EOF){
       printf("%d ",n1);
    }
    fclose(fp1);
    printf("\n odd number are:\n ");
    fp2=fopen("odd.txt","r");
   /* fscanf(fp2,"%s",odd);
    printf("%s",odd);*/
    while((ch=getc(fp2))!=EOF){
       printf("%c",ch);
    }
    fclose(fp2);
    return 0;
}
