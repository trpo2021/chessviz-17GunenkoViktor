#include <stdio.h>
#include <string.h>
void Print(char Desc[9][9]){
	int i,k;
	for (i=0;i<9;i++)
    {
        for(k=0;k<9;k++)
        {
            printf("%c ",Desc[i][k]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    char Desc[9][9];
    char move[7];
	int i,k,cori,corj,corI,corJ;//i- string j-colum 
    Desc[1][1]='r';
    Desc[1][2]='n';
    Desc[1][3]='b';
    Desc[1][4]='q';
    Desc[1][5]='k';
    Desc[1][6]='b';
    Desc[1][7]='n';
    Desc[1][8]='r';
    Desc[2][1]='p';
    Desc[2][2]='p';
    Desc[2][3]='p';
    Desc[2][4]='p';
    Desc[2][5]='p';
    Desc[2][6]='p';
    Desc[2][7]='p';
    Desc[2][8]='p';
    Desc[7][1]='P';
    Desc[7][2]='P';
    Desc[7][3]='P';
    Desc[7][4]='P';
    Desc[7][5]='P';
    Desc[7][6]='P';
    Desc[7][7]='P';
    Desc[7][8]='P';
    Desc[8][1]='R';
    Desc[8][2]='N';
    Desc[8][3]='B';
    Desc[8][4]='Q';
    Desc[8][5]='K';
    Desc[8][6]='B';
    Desc[8][7]='N';
    Desc[8][8]='R';
    Desc[0][1]='a';
    Desc[0][2]='b';
    Desc[0][3]='c';
    Desc[0][4]='d';
    Desc[0][5]='e';
    Desc[0][6]='f';
    Desc[0][7]='g';
    Desc[0][8]='h';
    Desc[0][0]=' ';
    Desc[1][0]='8';
    Desc[2][0]='7';
    Desc[3][0]='6';
    Desc[4][0]='5';
    Desc[5][0]='4';
    Desc[6][0]='3';
    Desc[7][0]='2';
    Desc[8][0]='1';
    for (i=3;i<7;i++)
    {
        for (k=1;k<9;k++)
        {
            Desc[i][k]=' ';
        }
    }
    move[0]='6';
    Print(Desc);
    while (move[0]!='0'){
    	scanf ("%s",move);
    	if(move[0]=='0'){
    		return 0;
		}
    	switch(move[0]){
    		case 'a':
    			corj=1;
    			break;
    		case 'b':
    			corj=2;
    			break;
    		case 'c':
    			corj=3;
    			break;
    		case 'd':
    			corj=4;
    			break;
    		case 'e':
    			corj=5;
    			break;
    		case 'f':
    			corj=6;
    			break;
    		case 'g':
    			corj=7;
    			break;
    		case 'h':
    			corj=8;
    			break;
    	}
    	switch(move[1]){
    		case '1':
    			cori=8;
    			break;
    		case '2':
    			cori=7;
    			break;
    		case '3':
    			cori=6;
    			break;
    		case '4':
    			cori=5;
    			break;
    		case '5':
    			cori=4;
    			break;
    		case '6':
    			cori=3;
    			break;
    		case '7':
    			cori=2;
    			break;
    		case '8':
    			cori=1;
    			break;
		}
		switch(move[3]){
    		case 'a':
    			corJ=1;
    			break;
    		case 'b':
    			corJ=2;
    			break;
    		case 'c':
    			corJ=3;
    			break;
    		case 'd':
    			corJ=4;
    			break;
    		case 'e':
    			corJ=5;
    			break;
    		case 'f':
    			corJ=6;
    			break;
    		case 'g':
    			corJ=7;
    			break;
    		case 'h':
    			corJ=8;
    			break;
		}
		switch(move[4]){
    		case '1':
    			corI=8;
    			break;
    		case '2':
    			corI=7;
    			break;
    		case '3':
    			corI=6;
    			break;
    		case '4':
    			corI=5;
    			break;
    		case '5':
    			corI=4;
    			break;
    		case '6':
    			corI=3;
    			break;
    		case '7':
    			corI=2;
    			break;
    		case '8':
    			corI=1;
    			break;
		}
		Desc[corI][corJ]=Desc[cori][corj];
		Desc[cori][corj]=' ';
		Print(Desc);
	}
    return 0;
}
