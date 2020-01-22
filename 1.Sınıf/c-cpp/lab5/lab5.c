#include <stdio.h>
#define SIZE 10
void reverse(char array[], int uzunluk)
{
	int a=0;
	int b=uzunluk-1;

	for(a=0, b=uzunluk-1; a<=uzunluk/2, b>=uzunluk/2; a++, b--)
	{
		char x= array[a];
		char y= array[b];
		array[a]= y;
		array[b]= x;
	}
}
int main()
{
char a[SIZE];
int i=0;
char x;
int j=0;
char q;

while(1)
{
	scanf("%c", &x);	
	if(x==' ' || x=='!') break;
	a[i]=x;
	i++;
}

while(1)
{
	scanf("%c", &q);
	if(q==' ') continue;
	if(q=='!')break;
	q-=48;
	a[q]-=32;
	q+=48;
	//if(q=='!')break;
}

//printf("%d", q);
reverse(a,i);

//printf("%d\n", i);
for(j=0;j<i; j++)printf("%c", a[j]);
printf("\n");
return 0;
}

