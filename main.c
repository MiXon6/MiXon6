#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define ms 10 /* max strane*/
#define mm 10 /* max mine */
#define mp 90 /* broj mogucih odigranih polja*/

int side; /*duzina table*/
int mine; /* broj mina*/

int postoji(int red,int kolona)
{
	if((red>=0)&&(red<side)&&(kolona>=0)&&(kolona<side)==0) /*vraca 0 ako su red i kolona na tabli*/
		return 0;
	else
		return 1;
}
int provera(int red,int kolona,char board[][ms])/*da li odredjena celija ima bombu u sebi*/
{
	if(board[red][kolona]=='*')
		return 1;
	else
		return 0;	
}
void unesi_potez(int *x,int *y)
{
	printf("Unesi potez,(red(dole),kolona->)");
	scanf("%d%d",&x,&y);
}
int pocetak()
{
	int lvl=1,n,bombe;
	printf("Dobrodosao u minesweeper\n");
	getch();
	if(lvl==1)
	{
		n=9; /*n je broj redova i kolona   9*9  */
		bombe=10; /* 10 MINE*/
	}
}
void tabla(char tabla1[][ms])
{
	int i,j;
	for(i=0;i<side;i++)
		printf("%d",i);
	printf("\n");
	for(i=0;i<side;i++)
	{
		printf("%d   ",i);
		for(j=0;j<side;j++)
			printf("%c ",tabla1[i][j]);
		printf("\n");	
	}		
}
int krug_mine(int red,int kolona,int mine[][2],char tabla2[][ms])/* za proveravanje da li je mina u okrugu*/
{
	int i,br=0;
	/* za iznad*/
	if(postoji(red-1,kolona)==1)
	{
		if(provera(red-1,kolona,tabla2)==1)
		br++;
	}
	/* za ispod*/
	if(postoji(red+1,kolona)==1)
	{
		if(provera(red+1,kolona,tabla2)==1)
		br++;
	}
	/* za levo*/
	if(postoji(red1,kolona-1)==1)
	{
		if(provera(red,kolona-1,tabla2)==1)
		br++;
	}
	/* za desno*/
	if(postoji(red,kolona+1)==1)
	{
		if(provera(red,kolona+1,tabla2)==1)
		br++;
	}
	/* za levo-gore*/
	if(postoji(red-1,kolona-1)==1)
	{
		if(provera(red-1,kolona-1,tabla2)==1)
		br++;
	}
	/*za desno-gore*/
	if(postoji(red-1,kolona+1)==1)
	{
		if(provera(red-1,kolona+1,tabla2)==1)
		br++;
	}
	/* za levo-dole*/
	if(postoji(red+1,kolona-1)==1)
	{
		if(provera(red+1,kolona-1,tabla2)==1)
		br++;
	}
	/* za desno-dole*/
	if(postoji(red+1,kolona+1)==1)
	{
		if(provera(red+1,kolona+1,tabla2)==1)
		br++;
	}
	return br;
}
int main() {
	int br,red=10,kolona=10;
	
 
	return 0;
}
