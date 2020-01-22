#include<iostream>
#include<vector>
using namespace std;
void fillVector(vector<int>&);
//fillvector
// @param vector<int>& the vector to be filled
void printVector(const vector<int>&);

int main()
{
	
	vector<int>myVector;
	fillVector(myVector);
	printVector(myVector);
	
	return 0;
}

void fillVector(vector<int>& newMyVector)
{
	cout<<"type in a list of numbers (-1 top stop)";
	int input;
	cin>>input;
	
	while(input!=-1)
	{
		newMyVector.push_back(input);
		cin>>input;
	}
	cout<<endl;
}
void printVector(const vector<int>&){
	cout<<"vector";
	for(unsigned int i=0;i<newMyVector.size();i++)
	cout<<newMyVector[i]<<" ";
	cout<<endl;
}
