#include <stdio.h>
#define BUFFER_SIZE 100
int main()
{
int rows, columns;
scanf("%d %d", &rows,&columns);
//printf("%d %d", rows, columns);
char a;
char input[rows][columns];
int sayac=0;
char tek[BUFFER_SIZE];
int i=0;
int j=0;
int k=0;
int l=0;
int u=0;
int f=0;
int c=0;
int m=0;
char kosul[9];
	while(scanf("%c", &a)!= EOF)
	{
		if(a==' '||a=='\n'||a=='\t'||a=='\0') continue;
		sayac++;
		if(/*sayac>1 &&*/ sayac<rows*columns+1)
		{
		tek[i]=a;
		i++;
		}
		if(sayac>=rows*columns+1)
		{
			kosul[m]=a;
			m++;
		}
	}
	
	for(l;l<=rows;l++)
	{
		for(k=0 ; j<rows*columns, k<columns ;j++, k++)
		{
			input[l][k]=tek[j];
		}
	}
	for(u=0;u<rows;u++)
	{
		for(f=0;f<columns;f++)
		{
			printf("%c ", input[u][f]);
		}
		printf("\n");
	}
	printf("\n");
	
int p, o;
	
	for(p=0;p<rows;p++)
	{
		for(o=0;o<columns;o++)
		{
			if(input[p][o]==kosul[1])
			input[p][o]=kosul[2];
		}
	}
	printf("replacing %c with %c:\n", kosul[1], kosul[2]);
	for(u=0;u<rows;u++)
	{
		for(f=0;f<columns;f++)
		{
			printf("%c ", input[u][f]);
		}
		printf("\n");
	}
	printf("\n");	
	
	for(p=0;p<rows;p++)
	{
		for(o=0;o<columns;o++)
		{
			if(input[p][o]==kosul[4])
			input[p][o]=kosul[5];
		}
	}
	printf("replacing %c with %c:\n", kosul[4], kosul[5]);
	for(u=0;u<rows;u++)
	{
		for(f=0;f<columns;f++)
		{
			printf("%c ", input[u][f]);
		}
		printf("\n");
	}
	printf("\n");	
	
	for(p=0;p<rows;p++)
	{
		for(o=0;o<columns;o++)
		{
			if(input[p][o]==kosul[7])
			input[p][o]=kosul[8];
		}
	}
	printf("replacing %c with %c:\n", kosul[7], kosul[8]);
	for(u=0;u<rows;u++)
	{
		for(f=0;f<columns;f++)
		{
			printf("%c ", input[u][f]);
		}
		printf("\n");
	}
	printf("\n");	
	
	
//for(int o = 0; o<columns; o++ ) printf("%c", input[3][o]);
//for(int o = 0; o<9; o++) printf("%c", kosul[o]);
return 0;
}
