#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
 // (25 * 25 - 99)
int level()
{
	int lvl,n,bombe;
	P:
	printf("Izaberi level\n");
	printf ("Ukucaj 1 za lak level\n
	printf("Ukucaj 2 za srednji level\n");
	printf("Ukucaj 3 za teski level\n");
	scanf("%d",&lvl);
	if((lvl<=0) && (lvl>=4))
	{
		printf("Nisi lepo uneo broj\n");
		printf("Moras uneti broj izmedju 1 i 3\n");
		goto P;
	}
	if(lvl==1)
	{
		n=9; /*n je broj redova i kolona   9*9  */
		bombe=10; // 10 MINE
	}
	if(lvl==2)
	{
		n=16; /* 16*16 */
		bombe=40; // 40 mine
	}
	if(lvl==3)
	{
		n=24; /* 24*24 */
		bombe=99; // 99 mine
	}
	return n;
}
int table(int *n[])
{
	printf("%c   %d %d %d %d %d %d %d %d %d %d\n",0,1,2,3,4,5,6,7,8,9,10);
    printf("%d  %c %c %c %c %c %c %c %c %c %c\n",1,n[1][1],n[1][2],n[1][3],n[1][4],n[1][5],n[1][6],n[1][7],n[1][8],n[1][9],n[1][10]);
    printf("%d  %c %c %c %c %c %c %c %c %c %c\n",2,n[2][1],n[2][2],n[2][3],n[2][4],n[2][5],n[2][6],n[2][7],n[2][8],n[2][9],n[2][10]);
    printf("%d  %c %c %c %c %c %c %c %c %c %c\n",3,n[3][1],n[3][2],n[3][3],n[3][4],n[3][5],n[3][6],n[3][7],n[3][8],n[3][9],n[3][10]);
    printf("%d  %c %c %c %c %c %c %c %c %c %c\n",4,n[4][1],n[4][2],n[4][3],n[4][4],n[4][5],n[4][6],n[4][7],n[4][8],n[4][9],n[4][10]);
    printf("%d  %c %c %c %c %c %c %c %c %c %c\n",5,n[5][1],n[5][2],n[5][3],n[5][4],n[5][5],n[5][6],n[5][7],n[5][8],n[5][9],n[5][10]);
    printf("%d  %c %c %c %c %c %c %c %c %c %c\n",6,n[6][1],n[6][2],n[6][3],n[6][4],n[6][5],n[6][6],n[6][7],n[6][8],n[6][9],n[6][10]);
    printf("%d  %c %c %c %c %c %c %c %c %c %c\n",7,n[7][1],n[7][2],n[7][3],n[7][4],n[7][5],n[7][6],n[7][7],n[7][8],n[7][9],n[7][10]);
    printf("%d  %c %c %c %c %c %c %c %c %c %c\n",8,n[8][1],n[8][2],n[8][3],n[8][4],n[8][5],n[8][6],n[8][7],n[8][8],n[8][9],n[8][10]);
    printf("%d  %c %c %c %c %c %c %c %c %c %c\n",9,n[9][1],n[9][2],n[9][3],n[9][4],n[9][5],n[9][6],n[9][7],n[9][8],n[9][9],n[9][10]);
    printf("%d %c %c %c %c %c %c %c %c %c %c\n",10,n[10][1],n[10][2],n[10][3],n[10][4],n[10][5],n[10][6],n[10][7],n[10][8],n[10][9],n[10][10]);
}
int main() {
	int n[][];
	level();
	table();    
    
	return 0;
}
