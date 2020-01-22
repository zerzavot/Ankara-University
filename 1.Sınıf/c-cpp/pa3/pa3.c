#include <stdio.h>
#define SIZE 100
int main()
{
int height, width; //
int modulus; //
char input[SIZE][SIZE]; //
char letter; //
int i=0; //
int a, b; //
int output=0; //
	
	scanf("%d %d %d", &height, &width, &modulus);
	
	int score[height][width];
	
	while(1)
	{
		scanf("%c", &letter);
		if(letter==' ' || letter=='\n' || letter=='\0' || letter=='\t')
			continue;
		
		input[a][b]=letter;
			if(b<width-1) b++;
			else {b=0; a++;}
			
		if(i>=height*width-1)break;
		i++;
	}
	
	for(a=0;a<height;a++)
	{
		for(b=0;b<width;b++)
		{
			score[a][b]=input[a][b];
		}
	}
	
	for(a=0; a<height; a++)
	{
		for(b=0; b<width; b++)
		{
			if(score[a][b]=='X' || score[a][b]=='P' || score[a][b]=='G')
			score[a][b] = 0;
			
			if(score[a][b]<=90 && score[a][b]>=65)
			score[a][b] = score[a][b] - 'A' + 1;
		
			if(score[a][b]>=97 && score[a][b]<=122)
			score[a][b] = score[a][b] - 'a' + 1;
		
			score[a][b] = score[a][b] % modulus;	
		}
	}
	
	int m, n;
	
	for(m=0; m<height; m++)
	{
		for(n=0; n<width; n++)
		{
			if(input[m][n]=='G')
			{
				a=m;
				b=n;
			}
		}
	}
	
	//printf("%d %d", a, b);
	
	char function;
	
	while(1)
	{
		if(scanf("%c", &function) == EOF) break;
				
		//scanf("%c", &function);
		if(function=='\n'||function=='\t'||function=='\0'||function==' ') continue;
		//printf("%c ", function);
		//if(function==' ') break;	
		
		if(function=='R')
		{
			if(b+1<width)
			{
				b=b+1;
				
				if(input[a][b]=='X') break;
				
				else if(input[a][b]=='P')
				printf("%d\n", output);
				
				else
				{
					output=output + score[a][b];
					score[a][b]=0;
				}
			}
		}
		
		if(function=='L')
		{
			if(b-1>=0)
			{
				b=b-1;
				
				if(input[a][b]=='X') break;
				
				else if(input[a][b]=='P')
				printf("%d\n", output);
				
				else
				{
					output=output + score[a][b];
					score[a][b]=0;
				}
			}
		}
		
		if(function=='U')
		{
			if((a-1)>=0)
			{
				a=a-1;
				
				if(input[a][b]=='X') 
				break;
				
				else if(input[a][b]=='P')
				printf("%d\n", output);
				
				else
				{
					output=output + score[a][b];
					score[a][b]=0;
				}
			}
		}
		
		if(function=='D')
		{
			if(a+1<height)
			{
				a=a+1;
				
				if(input[a][b]=='X') break;
				
				else if(input[a][b]=='P')
				printf("%d\n", output);
				
				else
				{
					output=output + score[a][b];
					score[a][b]=0;
				}
			}
		}
		
		if(function=='P')
		{
			printf("%d\n", output);
		}
		
		if(function=='X')
		{
			break;
		}
	}
	
	printf("%d\n", output);

/*for(a=0; a<height; a++)
{
	for(b=0; b<width; b++)
	{
		printf("%c ", input[a][b]);
	}
	printf("\n");
}

printf("\n");

for(a=0; a<height; a++)
{
	for(b=0; b<width; b++)
	{
		printf("%d ", score[a][b]);
	}
	printf("\n");
}*/
return 0;
}
