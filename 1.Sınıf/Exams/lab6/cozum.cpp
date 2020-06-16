//COM102B Yilmaz Ar 2020 
//author: Fatma Zehra Ortak 16290114.cpp

#include <iostream>
using namespace std;

class Complex
{
	friend ostream &operator<<(ostream &,const Complex &);
	friend istream &operator>>(istream &,Complex &);
	public:
		Complex(int r,int i):real(r),imag(i){}
		Complex(const Complex &second):real(second.real),imag(second.imag){
			cout<<"Copy constructor is called.\n";
		}
		Complex(){}
		~Complex(){}
		
		Complex operator+(const Complex &c){
			
			Complex karmasik;
			karmasik.real=this->real+c.real;
			karmasik.imag=this->imag+c.imag;
			return karmasik;
		
		}

		Complex operator*(const Complex &c){
		
			Complex karmasik;
			karmasik.real=(this->real*c.real)-(this->imag*c.imag);
			karmasik.imag=(this->real*c.imag)+(this->imag*c.real);
			return karmasik;		
		
		}
		
		


	private:
		double real;
		double imag;

};

ostream &operator<<(ostream &output,const Complex &c)
{
	output<<c.real;
	if(c.imag>0)
		output<<"+"<<c.imag<<"i"<<endl;
	else
		output<<c.imag<<"i"<<endl;
	return output;
}

istream &operator>>(istream &input,Complex &c)
{
	input>>c.real;
	input>>c.imag;
	input.ignore();
	return input;

}

int main()
{
	Complex c1;

	cin>>c1; //c1 = -2.1 -3.4i

	Complex c2;

	cin>>c2; //c2 = 3.5 2.4i

	Complex c3(c1); //c3 = -2.1 -3.4i

	Complex c4, c5;

	c4=c2+c3;
	c5=c2*c3;

	cout<<c1<<c2<<c3<<c4<<c5;

	return 0;
}



