#include <iostream>
using namespace std;

class A
{
	protected:
		int x;
	public:
};

class C
{
	private:
		int z;
	public:

};
class B
{
	private:
		int y;
		C c;
	public:
	
	
};
int main()
{
	int i1, i2, i3, i4;
	cin>>i1>>i2>>i3>>i4;
	
	A *p;
	A a(i1);
	A *b=&a;
	B c(i2,i3,i4);
	B *d=&c;
	p=d;
	d->message();
	A *ptr[]={p,b,d,&c,&a};

	for(int i=0; i<5; i++)
	{
		ptr[i]->print();
		ptr[i]->message();
	}
	
	return 0;
}
