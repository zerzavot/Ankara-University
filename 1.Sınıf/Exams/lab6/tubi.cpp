#include <iostream>
using namespace std;

class Complex
{
	public:
    Complex(){
        
    }
    ~Complex(){
    
    }
    Complex(double r,double i){
        real = r;
        imag = i;
    }
    Complex(const Complex& c){
        cout<<"Copy constructor is called.\n";
        real = c.real;
        imag = c.imag;
    }

    Complex operator +(const Complex& c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        
        return temp;
    }
    Complex operator*(const Complex& c){
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        
        return temp;
    }
    
    friend ostream &operator << (ostream &out,const Complex &c);
    friend istream &operator >> (istream &in, Complex &c);
    

	private:
		double real;
		double imag;

};
    ostream &operator << (ostream &out,const Complex &c){
        
        if(c.imag > 0){
            out<<c.real<<"+"<<c.imag <<"i\n"; 
        }
        else{
            out<<c.real<<c.imag <<"i\n" ; 
        
        }
        return out;
    }
    istream &operator >> (istream &in, Complex &c){
        char a;
        in >> c.real;
        in >> c.imag;
        //in >> ignore();
        in >> a;
        return in;
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




