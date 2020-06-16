#include <iostream>
using namespace std;

class C1
{
	
	
	
	
	
	
	private:
		int a;
		int b;
};

class C2
{
	
	
	
	
	
	
	
	protected:
		C1 x;
		int y;
};

class C3 : public C2
{









		
	private:
		int b;
};

class C4 : public C1
{









	private:
		int x;
		int y;
};
void function1(int a, int b)
{
	C1 x1(a);
	C2 y1(b);

}

void function2(int a, int b)
{
	C3 x2(a);
	C4 y2(b);

}
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

