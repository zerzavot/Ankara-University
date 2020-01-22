#include <stdio.h>
int main ()
{

int x;
char w;

while(scanf("%d %c", &x, &w) != EOF)
{
	if((w=='B') || (w=='b'))
	{
	long long int y = 1; //ondalik
	long long int snc = 0; //sonuc
	long long int p = 0; //kalan
	
	while(x != 0)
	{
		p = x%2;
		x/=2;
		
		p = p * y;
		snc += p;
		y = y * 10;
	}
	printf("%lld\n", snc);
	}
		
	else if((w=='H') || (w=='h'))
	{ 
	while(x != 0)
	{
		int y;
		if(x < 16 && x >= 10) {x = x + 55; putchar(x); break;}
		else if(x < 10) {x = x + 48; putchar(x); break;}
		else y = x / 16;
		
			if(y < 16)
			{
					if(y >= 10) y = y + 55;
					else y = y + 48;
				
				putchar(y);
				x%=16;
				x = x + 48;
				putchar(x);
				break;
			}
			else if(y < 256)
			{
				int a;
				a = y / 16;
					if(a >= 10) a = a + 55;
					else a = a + 48;
				putchar(a);
				
				y%=16;
					if(y >= 10) y = y + 55;
					else y = y + 48;
				putchar(y);
				
				x%=16;
					if(x >= 10) x = x + 55;
					else x = x + 48;
				putchar(x);
				break;
			}
			else if(y < 4096)
			{
				int a;
				a = y / 256;
					if(a >= 10) a = a + 55;
					else a = a + 48;
				putchar(a);
				
				int b;
				b = y / 16;
				b%=16;
					if(b >= 10) b = b + 55;
					else b = b + 48;
				putchar(b);
				
				y%=16;
					if(y >= 10) y = y + 55;
					else y = y + 48;
				putchar(y);
				
				x%=16;
					if(x >= 10) x = x + 55;
					else x = x + 48;
				putchar(x);
				break;
			}		
	} if(x==0) {x=x+48; putchar(x);}		
	printf("\n");
	}
		
		
	else if((w=='O') || (w=='o'))
	{
	while(x != 0)
	{
		int y;
		if(x < 8) {x = x + 48; putchar(x); break;}
		else y = x / 8;
		
			if(y < 8)
			{
				y = y + 48;
				putchar(y);
				
				x%=8;
				x = x + 48;
				putchar(x);
				break;
			}
			else if(y < 64)
			{
				int a;
				a = y / 8;
				a = a + 48;
				putchar(a);
				
				y%=8;
				y = y + 48;
				putchar(y);
				
				x%=8;
				x = x + 48;
				putchar(x);
				break;
			}
			else if(y < 512)
			{
				int a;
				a = y / 64;
				a = a + 48;
				putchar(a);
				
				int b;
				b = y / 8;
				b%=8;
				b = b + 48;
				putchar(b);
				
				y%=8;
				y = y + 48;
				putchar(y);
				
				x%=8;
				x = x + 48;
				putchar(x);
				break;
			}
			else if(y < 4096)
			{
				int a;
				a = y / 512;
				a = a + 48;
				putchar(a);
				
				int b;
				b = y / 64;
				b%=8;
				b = b + 48;
				putchar(b);
				
				int c;
				c = y / 8;
				c%=8;
				c = c + 48;
				putchar(c);
				
				y%=8;
				y = y + 48;
				putchar(y);
				
				x%=8;
				x = x + 48;
				putchar(x);
				break;
			}		
			else if(y < 32768)
			{
				int a;
				a = y / 4096;
				a = a + 48;
				putchar(a);
				
				int b;
				b = y / 512;
				b%=8;
				b = b + 48;
				putchar(b);
				
				int c;
				c = y / 64;
				c%=8;
				c = c + 48;
				putchar(c);
				
				int d;
				d = y / 8;
				d%=8;
				d = d + 48;
				putchar(d);
				
				y%=8;
				y = y + 48;
				putchar(y);
				
				x%=8;
				x = x + 48;
				putchar(x);
				break;
			}				
	} if(x==0) {x=x+48; putchar(x);}			
	printf("\n");
	}
}
return 0;
}
