#include <stdio.h>
int main ()
{
int x;
int y = 0;
int z = 'A' - 'a';
	

	while((x = getchar ()) != EOF)
	{
		if((x<='Z' && x>='A') || (x<='z' && x>='a'))
		{
			y+=1;
			

			if((x != 'a') && (x != 'e') && (x != 'i') && (x != 'u') && (x != 'o') && (x != 'A') && (x != 'E') && (x != 'I') && (x != 'U') && (x != 'O'))
			{
				
				if(x<='z' && x>='a')
				{
					x+=z;
					
					putchar(x);
				}
				else if(x<='Z' && x>='A')
				{
					
					putchar(x);
				
				}

			}
		
		}
		
	
	}

printf(" %d", y);
return 0;
}  
