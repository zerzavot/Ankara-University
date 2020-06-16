/*
TODO:

ANKARA UNIVERSITY
COM102B-COM120
Spring 2020 Corona Time
LAB8

*/

#include <iostream>
using namespace std;

class A{

public:
	A(int birinci,int ikinci=3){
		setBir(birinci);
		setIki(ikinci);
		cout<<"Constructor A:"<<getBir()<<" "<<getIki()<<endl;
	}

	~A(){
		cout<<"Destructor A:"<<getBir()<<" "<<getIki()<<endl;
	}


	void setBir(int birinci){	this->bir=birinci;	}
	int getBir()const{	return bir;		}

	void setIki(int ikinci){	this->iki=ikinci;	}
	int getIki()const{	return iki;		}

private:
	int bir,iki;

};
/////////////////////////////////////////////////////////////////////////
class B:public A{

public:
	//A a(1,2);
	B(int birinci,int ikinci=1,int ucuncu=2):A(ikinci,ucuncu){
		setBir(birinci);
		setIki(ikinci);
		setUc(ucuncu);		
		cout<<"Constructor B:"<<getBir()<<" "<<getIki()<<" "<<getUc()<<endl; 
	}

	~B(){
		cout<<"Destructor B:"<<getBir()<<" "<<getIki()<<" "<<getUc()<<endl; 
	}
	void setBir(int birinci){	this->bir=birinci;	}
	int getBir()const{	return bir;		}

	void setIki(int ikinci){	this->iki=ikinci;	}
	int getIki()const{	return iki;		}

	void setUc(int ucuncu){	this->uc=ucuncu;	}
	int getUc()const{	return uc;		}

private:

	int bir,iki,uc;
	

};





void function1(int a, int b)
{
	A a1(a);
	B b1(b);

}
int main()
{
	int c, d, i, j;
	cin>>c>>d; // c:27 d:45
	cin>>i>>j; // i:55 j:67

	function1(i,j); // A a1(55) // B b1(67)

	B x(c,d); // c:27 d:45

	return 0;
}

