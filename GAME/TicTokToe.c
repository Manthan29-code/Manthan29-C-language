#include<stdio.h>
void display_board(char p[3][3]);
int update_board(char p[3][3],int a,int b,int pl);
int winner(char a[3][3],int p);

int main()
{
    char board[3][3]={{'0','0','0'},{'0','0','0'},{'0','0','0'}};
    int r,c,term,result;
    for(term=0;term<9;)
    {
        printf("\n==============================================================");
        printf("\n\n    PLAYER %d",(term%2 +1));
        printf("\nchose row:");
        scanf("%d",&r);
        printf("\nchose  column:");
        scanf("%d",&c);
        result = update_board(board,r,c,((term%2 )+1)); 
        display_board(board);
        if(winner(board,(term%2 )+1))
        {
            printf("\nwinner is player %d",((term%2 )+1));
            return 0;
        }
        term+=result;
       
    }

}

int winner(char a[3][3],int p)
{
    int i=0,j=0,hcount=0, vcount=0;
    char ch;
    if(p==1)
    {
        ch='*';
    }
    else{
        ch='@';
    }
    for(i=0;i<3;i++)
    {
        hcount=0;
        vcount=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==ch)
            {
                hcount++;
            }
            if(a[j][i]==ch)
            {
                vcount++;
            }
        }    
        if(hcount==3 || vcount==3)
        {
            return 1;
        }
    }
    vcount=0;
    hcount=0;
    for(i=0;i<3;i++)
    {
        if(a[i][i]==ch)
        {
            vcount++;
        }
        if(a[i][2-i]==ch)
        {
            hcount++;
        }

    }
    if(vcount==3 || hcount==3)
    {
        return 1;
    }
    return 0;
}
void display_board(char p[3][3])
{
    int i=0,j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
              if(p[i][j]=='0')
              {
                printf("%c\t",'_');
              } 
              else {
                printf("%c\t",p[i][j]);
              } 
        }
        printf("\n");
    }    
}
int update_board(char p[3][3] ,int a,int b,int pl)
{
    if((p[a][b]=='0') && (pl==1))
    {
        p[a][b]='*';
        return 1;
    }
    else if((p[a][b]=='0') && (pl==2))
    {
        p[a][b]='@';
        return 1;
    }
    else{
        printf("\nINVALID INPUT\n");
        return 0;
    }

}