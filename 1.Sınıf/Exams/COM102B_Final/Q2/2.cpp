
#include <iostream>
using namespace std;

#define ROWC 3
#define COLUMNC 11

class Grid
{
	friend istream& operator>>(istream& in, Grid &g)
	{
		
		in>>g.asteriskCount;

		for(int i=0;i<ROWC;i++){
			for(int j=0;j<COLUMNC;j++){
				
				g.m[i][j]={0};
				
			}
		}
		for(int i=0;i<g.asteriskCount;i++){
			int first,second;
			in>>first>>second;
			g.m[first][second]=1;

		}
		
		return in;
	}
	
	friend ostream& operator<<(ostream& out, Grid &g)
	{
		for(int i=0;i<ROWC;i++){
			for(int j=0;j<COLUMNC;j++){
				if(g.m[i][j]==1){	out<<'*';}
				else{ 			out<<' ';}
			}
			out<<endl;
		}
	
		return out;
	}
	
	public:
		Grid(){
			asteriskCount=0;
			m[ROWC][COLUMNC]=0;
		}
		/**/
		computeNumberOfBlobs(){
			cout<<endl<<endl<<"0"<<endl;
		}
		
		
		
		
		
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

