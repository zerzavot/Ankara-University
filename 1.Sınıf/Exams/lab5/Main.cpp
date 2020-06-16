#include <iostream>
#include "MyArray.h"

using namespace std;

void f(MyArray a)
{
	MyArray a2 = a;
	a2.Insert(100, 2);
	a2.Insert(200, 4);

	cout << "printing a2*************\n";
	a2.print();
	cout << "done!*****************\n";
}

int main()
{
	MyArray a1;
	for (int i = 0; i < a1.Size();i++)
		a1.Insert(2*i, i); 
	cout << "checking insertion***********\n";
	a1.print();
	cout << "done!*****************\n";

	cout << "self assignment test*********\n";
	a1 = a1;
	cout << "done!*****************\n";

	f(a1);
	
	{
		MyArray a2(20);

		{

			MyArray a3;
			cout << "copy assignment test*********\n";
			a3 = a2;
			cout << "done!*****************\n";
		}
		cout << "is a2 still alive? *********\n";
		a2.print();
		cout << "done!*****************\n";
	}

	cout << "Perfect! *****************\n";
}

