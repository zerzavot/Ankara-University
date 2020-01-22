#include <stdio.h>
#define SIZE 50
int main()
{
char a;
char input[SIZE];
int i=0;
int x;
int j=0;
int k=0;
int h=0;
while(1)
{
	scanf("%c", &a);
	if(a==' ') break;
	input[i]=a;
	i++;
}
//for(j=0;j<i;j++)printf("%c", input[j]);
//printf("\n");
scanf("%d", &x);

for(k=0;k<x;k++)
{	
	char b=input[i-1];
	for(h=i-1;h>0;h--)
	{
		char c=input[h-1];
		input[h]=c;
	}
	input[0]=b;
}


for(j=0;j<i;j++)printf("%c", input[j]);
printf("\n");
//printf("%d", x);
return 0;
}
