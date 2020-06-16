
#include <iostream>
using namespace std;

class Square
{
	public:
		Square(){
		a=3; c='*';	
		}
		
		Square(int num,char cha){
			a=num; c=cha;
		}
		/**/
		Square operator*(int deger){
			
			Square ara;
			ara.a=this->a * deger;
			ara.c=this->c ;
			return ara;
		}
		
		void printSquare(){
			for(int i=0;i<a;i++){
				for(int j=0;j<a;j++){
					cout<<c;
				}
				cout<<endl;
			}
		}

		void set(int birint,char birchar){
			a=birint; c=birchar;
		}
	
		/**/
		Square operator+(const Square &s){

			Square ara;
			ara.a=this->a + s.a;
			ara.c=this->c;
			return ara;
		}
		
		
	private:
		int a;
		char c;
};

int main()
{
	int number1, number2;
	char c1, c2;

	cin>>number1>>number2>>c1>>c2;

	Square s1;

	s1.printSquare();
	cout<<endl;

	Square s2(number1,c1);

	s2.printSquare();
	cout<<endl;
	
	Square s3;
	
	s3.set(number2, c2);

	s3.printSquare();
	cout<<endl;
	/**/
	Square s4;
	s4 = s2 + s3;
	
	s4.printSquare();
	cout<<endl;
	
	Square s5;
	s5 = s3 * 3;
	
	s5.printSquare();
	cout<<endl;

	return 0;
}

