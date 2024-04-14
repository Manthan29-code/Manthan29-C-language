// create a file to store structur with a use of fwrite and fread function
#include<stdio.h>
#define size 3
struct student{
    char name[10];
    int sid,fees,com,maths,eng;
}s[size],temp;
int main(){
    FILE *fp;
    int i;
    fp=fopen("struct.txt","w");
    for(i=0;i<size;i++){
      printf("\nEnter sid name fees and marks of com maths and eng for stdent%d: ",i+1);
      scanf("%d",&s[i].sid);
      scanf("%s",s[i].name);
      scanf("%d",&s[i].fees);
      scanf("%d",&s[i].com);
      scanf("%d",&s[i].maths);
      scanf("%d",&s[i].eng);
      fwrite(&s[i],sizeof(s[i]),1,fp);
    }
    fclose(fp);
    fp=fopen("struct.txt","r");
    printf("\nThe recored from file is");
    printf("\nSID\tName\tFees\tcom\tmaths\teng\n");
    for(i=0;i<size;i++){
    fread(&temp,sizeof(temp),1,fp);
    printf("\n%d\t%s\t%d\t%d\t%d\t%d\n",temp.sid,temp.name,temp.fees,temp.com,temp.maths,temp.eng);
    }
    fclose(fp);
    return 0;
}
