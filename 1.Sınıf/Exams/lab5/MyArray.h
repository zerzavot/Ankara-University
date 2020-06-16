#ifndef _MYARRAY
#define _MYARRAY

#include <iostream>
using namespace std;

class MyArray
{
	int* pData;
	int	 size;
public:
	// TODO: Implement the following 4 fuctions in the <studentID>.cpp file
	// 1-constructor
	MyArray(int sz = 10);
	// 2-destructor
	~MyArray();
	// 3-copy constructor
	MyArray(const MyArray&);
	// 4-copy assignment
	MyArray& operator=(const MyArray&);
	
	// inserts the data into index idx
	// if the idx exceeds the size, or less than 0, it returns false;
	// returns true otherwise
	bool Insert(int d, int idx);
	// returns size
	int Size();

	// an implementation is given for the following function.
	// do not modify it.
	void print() 
	{
		for (int i = 0; i < size; i++)
			cout << pData[i] << " ";
		cout << "\n";
	}
};



#endif
