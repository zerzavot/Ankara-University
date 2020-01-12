
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 20
struct student
{
	char name[MAX];
	int id;
	float grades[5];
};
int main()
{
	FILE *fpin;
	int N, i, j;
	fpin = fopen("input.txt", "r");
	fscanf(fpin, "%d", &N);
	struct student *sarray;
	sarray = (struct student *)malloc(N * sizeof(struct student));
	for (i = 0; i < N; i++)
	{
		fscanf(fpin, "%s %d", sarray[i].name, &sarray[i].id);
		for (j = 0; j < 5; j++)
		{
			fscanf(fpin, "%f", &sarray[i].grades[j]);
		}
	}
	FILE *fpout;
	fpout = fopen("output.txt", "w");
	for (i = 0; i < N; i++)
	{
		float average;
		float sum = 0; // unuttum
		for (j = 0; j < 5; j++)
		{
			sum += sarray[i].grades[j];
		}
		average = sum / 10;
		fprintf(fpout, "%s %d %f\n", sarray[i].name, sarray[i].id, average);
	}
	free(sarray);
	fclose(fpout);
	fclose(fpin);
	return 0;
}