#include <stdio.h>
#include <string.h>
int main()
{
char array[20][30];
int i=0, j;
char arama[20][30];

char a;

while(1)
{
	scanf("%s", array[i]);	
	
	if(array[i][0]=='E' && array[i][1]=='N' && array[i][2]=='D' && array[i][3]=='\0')
	break;
	i++;
}

int k=0;

while(1)
{
	if(scanf("%s", arama[k])==EOF) break;
	k++;
}
int m;

		/*if(*strstr(array[2], arama[0])!=0)
		{
			printf("%s %s", array[2], array[3]);
		}*/

for(j=0;j<i;j++)
{

		
	for(m=0; m<k; m++)
	{
		
		if(strcmp(array[j],arama[m])==0)
		{
			printf("%s %s", array[j], array[j+1]);
			printf("\n");
		}
		/*if(array[j][0]==arama[m][0])
		{
			if(strcmp(array[j], arama[m])!=0)
			printf("%s %s", array[j], array[j+1]);
		}*/
	}

	//printf("\n");
}

//for(j=0;j<k;j++) printf("%s ", arama[j]);
return 0;
}
