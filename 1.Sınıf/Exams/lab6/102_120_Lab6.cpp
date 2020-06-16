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
			
			Complex temp;
			temp.real=this->real+c.real;
			temp.imag=this->imag+c.imag;
			return temp;
		
		}

		Complex operator*(const Complex &c){
		
			Complex temp;
			temp.real=(this->real*c.real)-(this->imag*c.imag);
			temp.imag=(this->real*c.imag)+(this->imag*c.real);
			return temp;		
		
		}
		
		


	private:
		double real;
		double imag;

};

ostream &operator<<(ostream &output,const Complex &c)
{
	output<<c.real<<" "<<c.imag<<"i"<<endl;
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

	cin>>c1;

	Complex c2;

	cin>>c2;

	Complex c3(c1);

	Complex c4, c5;

	c4=c2+c3;
	c5=c2*c3;

	cout<<c1<<c2<<c3<<c4<<c5;

	return 0;
}



