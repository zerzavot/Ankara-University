#include <stdio.h>
int main ()
{

int a;
char b;

scanf("%d %c", &a, &b);

	if(b=='F')
	{
		printf("%.2f\n", (float)a*25/100);
	}
	else if(b=='T')
	{
		printf("%.2f\n", (float)a*21/100);
	}
	else if(b=='L')
	{
		printf("%.2f\n", (float)a*16/100);
	}
	else if(b=='N')
	{
		printf("%.2f\n", (float)a*40/100);
	}


return 0;
}
