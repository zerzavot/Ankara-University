#include <stdio.h>
int main ()
{

int x;
int tur = 0;
int turfor = 0;
int y = 1;
int sum = 0;
        while(scanf("%d", &x) != EOF)
	{
		tur++;
		turfor = 0;
		int i = 2;
		for(i=2; i < x; i++)
		{
			
			if(x%i == 0)	
			{
				turfor++;	
			}
		}
	
		if((turfor == 0) && (x != 1))
		{
			y = x*x;
			sum+=y;
		}
	}

printf("%d ", sum);
printf("%d", tur);


return 0;
}
