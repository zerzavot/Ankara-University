/*
LAB9--YILMAZ AR--COM102
16290114.cpp
*/

#include <iostream>
using namespace std;

class C1
{
	friend ostream &operator<<(ostream &,const C1 &);
	public:
		
		C1(int sa=3,int ba=3){
			setA(sa);setB(ba);
			cout<<"Constructor C1:";
			display();
			
		}
		void display(){
			cout<<getA()<<" "<<getB()<<endl;
		}

		~C1(){
				
		}
		
		void setA(int sa){a=sa;}
		void setB(int ba){b=ba;}
		int getA()const{return a;}
		int getB()const{return b;}
		
	
	
	private:
		int a;
		int b;
};

class C2
{
	public: 
		
		C2(int ya,int aq=2):x(ya,aq){
			
			setY(ya);
			cout<<"Constructor C2:";
			fonk2();
		}

		C2(int x,int y,int z):x(x,y){
			
			setY(x);
			cout<<"Constructor C2:";
			fonk();
		}
		

		void fonk(){
			cout<<getY()<<" "<<x.getB()<<" "<<4<<endl;
		}

		void fonk2(){
			cout<<getY()<<" "<<x.getB()<<" "<<3<<endl;
		}
		
	

		~C2(){
			cout<<"Destructor C2\n";	
		}
		
		

		void setY(int ya){y=ya;}
		int getY(){return y;}
		
		
	
	
	
	
	protected:
		C1 x;
		int y;
};
/**/
class C3 : public C2
{
	friend ostream &operator<<(ostream &,const C3 &);
	public:
		C3(int ba):C2(2,3,4){
			setB(ba);
			cout<<"Constructor C3:"<<getB()<<" ";
			C2::fonk();
		}

		~C3(){}

		C3(int pust1,int pust2,int pust3):C2(pust2,pust3,4){
			setB(pust1);
			cout<<"Constructor C3:"<<getB()<<" ";
			C2::fonk();
		}
		
		
		
		void setB(int ba){b=ba;}
		int getB(){return b;}

		
	private:
		int b;
};
class C4 : public C1
{
	public:

		C4(int pic,int pic2=2,int oc1=3,int oc2=4):C1(oc1,oc2){
			setX(pic);
			setY(pic2);
			
			cout<<"Constructor C4:"<<getX()<<" "<<getY()<<" ";
			C1::display();

		}

	

		void setX(int sa){x=sa;}
		void setY(int ba){y=ba;}
		int getX()const{return x;}
		int getY()const{return y;}




	private:
		int x;
		int y;
};


void function1(int a, int b)
{
	C1 x1(a);
	C2 y1(b);

}
/**/
void function2(int a, int b)
{
	C3 x2(a);
	C4 y2(b);

}

ostream &operator <<(ostream &out,const C3 &c3){
	out<<c3.b<<"@"<<c3.C2::y<<"@"<<c3.C2::x.getB()<<"@4"; //ilgilen

	return out;


}

ostream &operator <<(ostream &out,const C1 &c1){
	out<<c1.a<<"###"<<c1.b;

	return out;


}



C1 operator+(const C1 &first,C1 &second){
	
	C1 temp;
	
	temp.setA(first.getA()+second.getA() );
	temp.setB(first.getB()+second.getB() );

	
	
	return temp;
}

/*
C1 operator+(const C1 &first,C1 &second){
	
	
	int a,b=0;
	a=first.getA()+second.getA() ;
	b=first.getB()+second.getB();

	C1 temp(a,b);
	
	return temp;
}*/
int main()
{
	int c, d, i, j, x1, y1, z1;
	cin>>c>>d;
	cin>>i>>j;
	cin>>x1>>y1>>z1;

	function1(c,d);
	function2(i,j);
	

	C3 x3(x1,y1,z1);
	cout<<x3<<endl;
	
	C1 x4(i,j);
	cout<<x4+x4<<endl;
	

	
	
	return 0;
}

