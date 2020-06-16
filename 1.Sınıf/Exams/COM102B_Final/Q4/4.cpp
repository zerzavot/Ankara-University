#include<iostream>
#include<iomanip>
using namespace std;



int main()
{
	int say1,say2;
	cin>>say1>>say2;

	cout<<setw(15)<<say1;
	cout<<endl;
	cout<<'x';
	cout<<setw(14)<<say2;
	cout<<endl;
	cout<<"---------------"<<endl;


	//Çarpımlar
	int carpim1,carpim2,carpim3;

	//Çarpma İŞlemi

	//ilk
	int say2ninSonu= say2 % 10;
	carpim1=say2ninSonu * say1;
	cout<<setw(15)<<carpim1<<endl;

	//ikinci
	int say2ninOrtasi= (say2/10) %10;
	carpim2=say2ninOrtasi * say1;
	cout<<setw(14)<<carpim2<<endl;
	
	//Ucuncu
	int say2ninBasi= say2/100;
	carpim3=say2ninBasi *say1;
	cout<<setw(13)<<carpim3<<endl;

	cout<<"---------------"<<endl;
	
	//SONUC
	int toplam = carpim1 + (carpim2*10) +(carpim3*100);
	cout<<setw(15)<<toplam<<endl;
	
	
	
	

	return 0;
}


