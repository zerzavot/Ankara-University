#include <stdio.h>
#include <string.h>
int main()
{
char names[100][15];
int grades[100][4];

char end[] = "end";

int i=0, j=0, k=0, m=0;

while(1)
{
	scanf("%s", names[k]);

	if(strcmp(names[k], end)==0) break;
	
	for(i=0;i<4;i++)
	{
		scanf("%d", &grades[j][i]);
	}
	
	k++; //for names
	j++; //for grades
}

//for(i=0;i<k;i++) printf("%s\n", names[i]);

/*for(i=0;i<j;i++)
{
	for(m=0;m<4;m++)
	{
		printf("%d ", grades[i][m]);
	}
}*/

char arama[100][15];
int n=0;
while(1)
{
	scanf("%s", arama[n]);
	if(strcmp(arama[n], end)==0) break;
	n++; // for arama
}

//for(i=0; i<n; i++) printf("%s", arama[i]);
int x, y, f;

for(i=0;i<n;i++)
{
	for(x=0;x<k;x++)
	{
		if(strcmp(names[x], arama[i])==0)
		{
			float sum=0;
			for(y=0;y<4;y++)
			{
				sum+=grades[x][y];
			}
			printf("%s ", names[x]);
			printf("%.2f\n", sum/4);
			break;
		}
		
	}
		
	if(strstr(names[x], arama[i])==0)
	{
		printf("%s NONE\n", arama[i]);
	}
}
return 0;
}
