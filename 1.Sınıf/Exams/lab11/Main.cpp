#include <iostream>
#include <string>
#include "TQueue.h"

using namespace std;

template <class T>
void printandpop( myqueue<T>& q)
{
	while (!q.empty())
	{
		cout << q.front() << "\n";
		q.pop();
	}

}

int main()
{
	
	myqueue<int> IntQ;
	IntQ.push(1);
	IntQ.push(2);
	IntQ.push(3);	
	IntQ.push(4);
	
	printandpop(IntQ);
	
	//-----------
	myqueue<string> StrQ;
	StrQ.push("ali");
	StrQ.push("ayse");
	StrQ.push("ahmet");
	StrQ.push("sam");
	StrQ.push("jack");
	StrQ.push("elena");
	StrQ.push("mina");

	printandpop(StrQ);

}
