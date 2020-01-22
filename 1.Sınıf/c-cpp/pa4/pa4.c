#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 15
struct Flights
{
	char number[SIZE];
	char departure_city[SIZE];
	char arrival_city[SIZE];
	char departure_day[SIZE];
	char departure_time[SIZE];
	char arrival_day[SIZE];
	char arrival_time[SIZE];
	int seat_number;
}x, *first;
struct Passengers
{
	char first_name[SIZE];
	char last_name[SIZE];
	char departure_city[SIZE];
	char arrival_city[SIZE];
	char departure_day[SIZE];
	char flight_number[SIZE];
	int seat_number;
}y, *second;

int m1, m2;

int main()
{

	//int m1, m2;
	
	scanf("%d", &m1);
	//printf("%d", m1);
	
	first = (struct Flights *) malloc( m1*sizeof(x) );
	
	int i;

	for(i=0;i<m1;i++)
	{
		scanf("%s", first[i].number);
		scanf("%s", first[i].departure_city);
		scanf("%s", first[i].arrival_city);
		scanf("%s", first[i].departure_day);
		scanf("%s", first[i].departure_time);
		scanf("%s", first[i].arrival_day);
		scanf("%s", first[i].arrival_time);
	}
	
/*	for(i=0;i<m1;i++)
	{
		printf("%s ", first[i].number);
		printf("%s ", first[i].departure_city);
		printf("%s ", first[i].arrival_city);
		printf("%s ", first[i].departure_day);
		printf("%s ", first[i].departure_time);
		printf("%s ", first[i].arrival_day);
		printf("%s ", first[i].arrival_time);
		printf("\n");
	}
*/

	scanf("%d", &m2);
	//printf("%d", m2);
	
	second = (struct Passengers *) malloc( m2*sizeof(y) );
	
	int j;
	
	for(j=0;j<m2;j++)
	{
		scanf("%s", second[j].first_name);
		scanf("%s", second[j].last_name);
		scanf("%s", second[j].departure_city);
		scanf("%s", second[j].arrival_city);
		scanf("%s", second[j].departure_day);
	}
	
/*	for(j=0;j<m2;j++)
	{
		printf("%s ", second[j].first_name);
		printf("%s ", second[j].last_name);
		printf("%s ", second[j].departure_city);
		printf("%s ", second[j].arrival_city);
		printf("%s ", second[j].departure_day);
		printf("\n");
	}
*/

	//record
	
	for(i=0;i<m1;i++)
	{
		first[i].seat_number = 0;
	}
	
	for(i=0;i<m2;i++)
	{
		for(j=0;j<m1;j++)
		{
			if(	strcmp(first[j].departure_city, second[i].departure_city)==0 && 
				strcmp(first[j].arrival_city, second[i].arrival_city)==0 && 
				strcmp(first[j].departure_day, second[i].departure_day)==0	)
			{
				first[j].seat_number++;
				strcpy(second[i].flight_number, first[j].number);
				break;
			}
		}
			
          /**/	if(	strstr(first[j].departure_city, second[i].departure_city)=='\0' && 
			strstr(first[j].arrival_city, second[i].arrival_city)=='\0' && 
			strstr(first[j].departure_day, second[i].departure_day)=='\0'	)
		{
			printf("%s %s %s %s %s No reservation\n", 
				second[i].first_name, 
				second[i].last_name, 
				second[i].departure_city, 
				second[i].arrival_city, 
				second[i].departure_day);
		}
	}
	
	printf("\n");
	
/*	for(i=0;i<m1;i++)
	{
		printf("%d\n", first[i].seat_number);
	}
*/

/**/	/*for(i=0;i<m2;i++)
	{
		printf("%s\n", second[i].flight_number);
	}*/
		
		while(1)
		{
			char f1[SIZE];
			
			scanf("%s", f1);
			
			if(strcmp(f1, "END")==0) break;
			
				if(strcmp(f1, "search")==0)
				{
					char f2[SIZE];
					scanf("%s", f2);
					
					if(strcmp(f2, "flightNumber")==0)
					{
						char fn[SIZE];
						scanf("%s", fn);
						
						int counter = 0;
						char address[SIZE];
						 
						for(i=0;i<m1;i++)
						{
							if(strcmp(first[i].number, fn)==0)
							{
								counter++;
								strcpy(address, first[i].number);
								//printf("%s", address);
							}
						}
							
							if(counter>0)
							{
								for(i=0;i<m1;i++)
								{
									if(strcmp(first[i].number, address)==0)
									{
										printf("%s ", first[i].number);
										printf("%s ", first[i].departure_city);
										printf("%s ", first[i].arrival_city);
										printf("%s ", first[i].departure_day);
										printf("%s ", first[i].departure_time);
										printf("%s ", first[i].arrival_day);
										printf("%s", first[i].arrival_time);
										printf("\n\n");
									}
								}
							}
							
							if(counter==0)
							{
								printf("No flight with number %s\n\n", fn);
							}
					}
					else if(strcmp(f2, "departure")==0)
					{
						char d1[SIZE];
						scanf("%s", d1);
						
						int counter = 0;
						
						for(i=0;i<m1;i++)
						{
							if(strcmp(first[i].departure_city, d1)==0)
							{
								printf("%s ", first[i].number);
								printf("%s ", first[i].departure_city);
								printf("%s ", first[i].arrival_city);
								printf("%s ", first[i].departure_day);
								printf("%s ", first[i].departure_time);
								printf("%s ", first[i].arrival_day);
								printf("%s", first[i].arrival_time);
								printf("\n");
								counter++;
							}
						}
						
						if(counter>0)
						{
							printf("\n");
						}
						
						if(counter==0)
						{
							printf("No departure city %s\n\n", d1);
						}
					}
					else if(strcmp(f2, "arrival")==0)
					{
						char a1[SIZE];
						scanf("%s", a1);
						
						int counter = 0;
						
						for(i=0;i<m1;i++)
						{
							if(strcmp(first[i].arrival_city, a1)==0)
							{
								printf("%s ", first[i].number);
								printf("%s ", first[i].departure_city);
								printf("%s ", first[i].arrival_city);
								printf("%s ", first[i].departure_day);
								printf("%s ", first[i].departure_time);
								printf("%s ", first[i].arrival_day);
								printf("%s", first[i].arrival_time);
								printf("\n");
								counter++;
							}
						}
						
						if(counter>0)
						{
							printf("\n");
						}
						
						if(counter==0)
						{
							printf("No arrival city %s\n\n", a1);
						}
					}
				}
				
				else if(strcmp(f1, "print")==0)
				{
					char pn[SIZE];
					scanf("%s", pn);
					
					for(i=0;i<m1;i++)
					{
						if(strcmp(first[i].number, pn)==0)
						{
							printf("%s ", first[i].number);
							printf("%s ", first[i].departure_city);
							printf("%s ", first[i].arrival_city);
							printf("%s ", first[i].departure_day);
							printf("%s ", first[i].departure_time);
							printf("%s ", first[i].arrival_day);
							printf("%s ", first[i].arrival_time);
							printf("%d", first[i].seat_number);
							printf("\n\n");
						}
					}
				}
				
				else if(strcmp(f1, "printwP")==0)
				{
					char pn[SIZE];
					scanf("%s", pn);
					
					for(i=0;i<m1;i++)
					{
						if(strcmp(first[i].number, pn)==0)
						{
							printf("%s ", first[i].number);
							printf("%s ", first[i].departure_city);
							printf("%s ", first[i].arrival_city);
							printf("%s ", first[i].departure_day);
							printf("%s ", first[i].departure_time);
							printf("%s ", first[i].arrival_day);
							printf("%s ", first[i].arrival_time);
							printf("%d", first[i].seat_number);
							printf("\n");
							
								for(j=0;j<m2;j++)
								{
									if(strcmp(second[j].flight_number, pn)==0)
									{
										printf("%s ", second[j].first_name);
										printf("%s", second[j].last_name);
										printf("\n");
									}
								}
							
							printf("\n");
						}
					}
				}
				
				else if(strcmp(f1, "printR")==0)
				{
					char name[SIZE];
					char surname[SIZE];
					
					scanf("%s %s", name, surname);
					//printf("%s %s", name, surname);
					
					char nsfn[SIZE];
					
					for(i=0;i<m2;i++)
					{
						if(strcmp(second[i].first_name, name)==0 && strcmp(second[i].last_name, surname)==0)
						{
							strcpy(nsfn, second[i].flight_number);
							printf("%s ", second[i].first_name);
							printf("%s ", second[i].last_name);
						}
					}
					
					//printf("%s", nsfn);
					
					for(i=0;i<m1;i++)
					{
						if(strcmp(first[i].number, nsfn)==0)
						{
							printf("%s ", first[i].number);
							printf("%s ", first[i].departure_city);
							printf("%s ", first[i].arrival_city);
							printf("%s ", first[i].departure_day);
							printf("%s ", first[i].departure_time);
							printf("%s ", first[i].arrival_day);
							printf("%s", first[i].arrival_time);
							printf("\n");
						}
					}
				}
		}

return 0;
}
