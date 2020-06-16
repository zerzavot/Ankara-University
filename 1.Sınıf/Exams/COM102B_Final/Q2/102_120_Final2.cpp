
#include <iostream>
using namespace std;

#define ROWC 3
#define COLUMNC 11

class Grid
{
	friend istream& operator>>(istream& in, Grid &g)
	{


	}
	
	friend ostream& operator<<(ostream& out, Grid &g)
	{
	
	
	
	}
	
	public:
		
		
		
		
		
		
	private:
		int asteriskCount; 
		int m[ROWC][COLUMNC];
};


		
int main()
{
	Grid g1;
	
	cin>>g1;
	
	cout<<g1;
	
	cout<<g1.computeNumberOfBlobs()<<endl;

	return 0;
}

