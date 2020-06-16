
#include <iostream>
using namespace std;








int main()
{
	int b1[5], b2[7];
	double d1[4], d2[3];

	int i=0;


	while(i<5)
	{
		cin>>b1[i];
		i++;
	}
	i=0;
	while(i<4)
	{
		cin>>d1[i];
		i++;
	}
	i=0;
	while(i<7)
	{
		cin>>b2[i];
		i++;
	}
	i=0;
	while(i<3)
	{
		cin>>d2[i];
		i++;
	}

	printUnionOfArrays(b1,5, b2, 7);
	printUnionOfArrays(d1,4, d2, 3);
	printIntersectionOfArrays(b1,5, b2, 7);
	printIntersectionOfArrays(d1,4, d2, 3);

	return 0;
}

