
#include <iostream>
using namespace std;
///
/**/
template <typename Temp>
Temp printIntersectionOfArrays(Temp array1, int sayi1, Temp array2, int sayi2){
	for(int i=0;i<sayi1;i++){
		for(int j=0;j<sayi1;j++){
			if(array2[i]==array1[j]){
				cout<<array2[i];
				cout<<" ";
			}
		}
	}
	cout<<endl;
}

template <typename Temp>
Temp printUnionOfArrays(Temp array1, int sayi1, Temp array2, int sayi2){
	int flag=1;
	
	for(int i=0;i<sayi1;i++)
		cout<<array1[i]<<" ";
	for(int i=0;i<sayi2;i++){
		flag=1;
		for(int j=0;j<sayi1;j++){
			if(array2[i]==array1[j]) flag=0;
		}
		if(flag){
			cout<<array2[i];
			//
			cout<<" "; //
		}
	}
	cout<<endl;
}








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

