#include <stdio.h>
int main()
{
int x;
//scanf("%d", &x);
while(scanf("%d",&x) != EOF)
{

printf("Diamond size:%d\n", x);

if(x<0) {printf("Done!\n\n\n"); break;}

int a=1;  //-1-
int b=1;  //-|-
int c=1;  //- -
int c1=1; //- -
int d=1;  //-*- 
int d1=x; //-*-
int e=1;
int f=1;
int f1=x;
int g=1;
int g1=1;

/*-1-*/	for(a=1;a<=2*x+3;a++)
	{
		printf("-");
	}
	
	printf("\n");
	
/*-2-*/		for(b=1;b<=x;b++)
		{
			printf("|");
			
			for(c=1;c<=c1;c++)
			{
				printf(" ");
			}	
				for(d=1;d<=d1;d++)
				{
					printf("* ");
				}
			
			for(c=2;c<=c1;c++) 
			{	
				printf(" ");
			} 
			
			if(c1!=x) c1++; if(d1!=1) d1--;
			
			printf("|\n");
		}
		
/*-2-*/		for(e=1;e<=x;e++)
		{
			printf("|");
		
			for(f=1;f<=f1;f++)
			{
				printf(" ");
			}
		
				for(g=1;g<=g1;g++)
				{
					printf("* ");
				}
			
			for(f=2;f<=f1;f++)
			{
				printf(" ");
			}
		
			if(f1!=1) f1--; if(g1!=x) g1++;
		
			printf("|\n");
		}
	
/*-1-*/	for(a=1;a<=2*x+3;a++)
	{
		printf("-");
	}
	
	printf("\n");

}
return 0;
}
