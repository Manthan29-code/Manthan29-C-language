#include<stdio.h>

void main()
{
    int a1[2][2]={{4,5},{3,2}};
    int a2[2][3]={{2,6,3},{-3,2,4}};
    int a3[2][3]={{0},{0}};
    int i,j,k=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                a3[i][j] += a1[i][k]*a2[k][j];
            }
        }
    } 
    printf("Answer:\n");
    for(i=0;i<2;i++)
    {
        printf("[\t");
        for(j=0;j<3;j++)
        {
            printf("%d\t" ,a3[i][j]);
        }
        printf("]\n");

    }
}