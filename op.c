#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ms 10 /*max strane*/

int side;
char tabla1[ms][ms];
char tabla2[ms][ms];

void tabla()/*brojevi table*/
{
	int i,j;
	printf("  ");
	for(i=1;i<ms-1;i++)
		printf("%d",i);
	printf("\n");
	for(i=0;i<ms;i++)
	{
		for(j=0;j<ms;j++)
			printf("%c",tabla1[i][j]);
			if(i>0 && i<ms-1)
				printf("%d",i);
		printf("\n");
	}	
}
void orginal_tabla()
{
	int i,j;
	system("cls");
	printf("  ");
	for(i=1;i<ms-1;i++)
		printf("%d",i);
	printf("\n");
	for(i=0;i<ms;i++)
	{
		for(j=0;j<ms;j++)
		{
			if(i==0 || j==ms-1)
				tabla2[i][j]=' ';
			
		}
	}
	
	for(i=0;i<ms;i++)
	{
		for(j=0;j<ms;j++)
		{
			printf("%c",tabla2[i][j]);
		}
		
	}	
	if(i>0 && i<ms-1)
		printf("%d",i);
	printf("\n");	
	
}
void unos()
{
	int a,b;
	printf("Unesi broj reda(dole) pa broj kolone(->)\n");
	scanf("%d%d",&a,&b);
}
int krug_mine(int red,int kolona,int bomba[][2],char tabla2[][ms])/* za brojanje mina u okolini*/
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
	if(postoji(red,kolona-1)==1)
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
void pravljenje_table()
{
	int i,j;
	int random;
	for(i=0;i<ms;i++)
	{
		for(j=0;j<ms;j++)
			tabla2[i][j]='-';
	}
}
srand(time(NULL));/* za random*/
for(j=0;j<ms;j++)
{
	random=rand()%(ms-1)+1;
	{
		tabla[random][j]='*';/* za postavljanje mina*/
	}
}
/* kod da stavi da mina ne moze da se stavi na ivicama*/
for(i=0;i<ms;i++)
{
	for(j=0;j<ms;j++)
	{
		if(i==0 || i==ms-1)
		{
			tabla[i][j]=' ';
		}
	}
}
for(j=0;j<ms;j++)
{
	for(i=0;i<ms;i++)
	{
		if(j==0 || j==ms-1)
		{
			tabla[i][j]=' ';
		}
	}
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

int main() {
	return 0;
}
