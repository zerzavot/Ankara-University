#include <stdio.h>
int main ()
{
	int i, y, z;
	char t;
	scanf("%d %d %d %c", &i, &y, &z, &t);
	float q = (float)(i+y+z)/3;
	if(t=='x')
	{
		
		if(i>y && i>z)

			{printf("%d",i);}
		
		else if(y>i && y>z)

			{printf("%d",y);}

		else
			
			{printf("%d",z);}
	
	}
	else if(t=='m')
	{
		
		if(i<y && i<z)

			{printf("%d",i);}
		
		else if(y<i && y<z)

			{printf("%d",y);}

		else
			
			{printf("%d",z);}
	

	}
	else if(t=='s')
	{
		printf("%d", i+y+z);
	}
	else if(t=='a')
	{
		printf("%.2f", q);
	}
return 0;
}
