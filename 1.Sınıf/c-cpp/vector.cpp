#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>myVector;
	
	
	myVector.push_back(33);
	myVector.push_back(44);	
	myVector.push_back(99);	
	
	
	
	
	for(unsigned int i=0;i<myVector.size();i++)
	{
		cout<<"Vector "<<i<<"-"<<myVector[i]<<endl;
		
	}
	//myVector.begin()+int,new value ADDS ELEMENT BEFORE 
	//SPECIFIED INDEX NUMBER
	//myVector.begin()=first element
	//
		myVector.insert(myVector.begin()+2,5);
		for(unsigned int i=0;i<myVector.size();i++)
	{
		cout<<"Vector "<<i<<"-"<<myVector[i]<<endl;
		
	}
		
		myVector.erase(myVector.begin()+1);
		for(unsigned int i=0;i<myVector.size();i++)
	{
		cout<<"Vector "<<i<<"-"<<myVector[i]<<endl;
		
	}
		if(myVector.empty() )
		{
			cout<<"empty-----"<<endl;
		}
		else
		cout<<"not empty now"<<endl;
		
		
		myVector.clear();
		
			if(myVector.empty() )
		{
			cout<<"empty-----"<<endl;
		}
		
		
		cout<<"-----------------------"<<endl;
		for(unsigned int i=0;i<myVector.size();i++)
	{
		cout<<"Vector "<<i<<"-"<<myVector[i]<<endl;
		
	}
	
	return 0;
	
}
