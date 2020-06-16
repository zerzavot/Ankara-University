#ifndef _myqueue_H
#define _myqueue_H


class myqueue
{
public:	

	myqueue(int sz = 30);
	~myqueue();

	// MODIFICATION MEMBER FUNCTIONS
	void pop();
	void push(const double& entry);

	// CONSTANT MEMBER FUNCTIONS
	bool empty() const { return (count == 0); }
	double front() const;
	int size() const { return count; }
private:
	double* data;     // Circular array
	int qsize;
	int first;         // Index of double at front of the myqueue
	int last;          // Index of double at rear of the myqueue
	int count;         // Total number of doubles in the myqueue
								// HELPER MEMBER FUNCTION
	int next_index(int i) const { return (i + 1) % qsize; }
};

myqueue::myqueue(int sz)
	:qsize(sz)
{
	data = new double[qsize];
	count = 0;
	first = 0;
	last = qsize - 1;
}

myqueue::~myqueue()
{
	delete[] data;
}

double myqueue::front() const
{
	return data[first];
}


void myqueue::pop()
{
	first = next_index(first);
	--count;
}

void myqueue::push(const double& entry)
{
	last = next_index(last);
	data[last] = entry;
	++count;
}
#endif
