#include <stdio.h>

int main()
{
    char Desc[8][8];
    int i,k;
    Desc[0][0]='r';
    Desc[0][1]='n';
    Desc[0][2]='b';
    Desc[0][3]='q';
    Desc[0][4]='k';
    Desc[0][5]='b';
    Desc[0][6]='n';
    Desc[0][7]='r';
    Desc[1][0]='p';
    Desc[1][1]='p';
    Desc[1][2]='p';
    Desc[1][3]='p';
    Desc[1][4]='p';
    Desc[1][5]='p';
    Desc[1][6]='p';
    Desc[1][7]='p';
    Desc[6][0]='P';
    Desc[6][1]='P';
    Desc[6][2]='P';
    Desc[6][3]='P';
    Desc[6][4]='P';
    Desc[6][5]='P';
    Desc[6][6]='P';
    Desc[6][7]='P';
    Desc[7][0]='R';
    Desc[7][1]='N';
    Desc[7][2]='B';
    Desc[7][3]='Q';
    Desc[7][4]='K';
    Desc[7][5]='B';
    Desc[7][6]='N';
    Desc[7][7]='R';
    for ()
    for (i=0;i<8;i++)
    {
        for(k=0;k<8;k++)
        {
            printf("%c ",Desc[i][k]);
        }
        printf("\n");
    }
    return 0;
}
