
template <class T>
class stack
{
public:
	
	stack(int sz = 40);
	~stack();
	// MODIFICATION MEMBER FUNCTIONS
	void push(const T& entry);
	void pop();
	T& top();
	// CONSTANT MEMBER FUNCTIONS
	bool empty() const { return (used == 0); }
	int size() const { return used; }	
private:
	T* data;
	int used;             // How much of array is being used
	int ssize;
};

template <class T>
stack<T>::stack(int sz)
	:ssize(sz)
{ 
	used = 0; 
	data = new T[ssize];
}

template <class T>
stack<T>::~stack()
{
	delete[] data;
}

template <class T>
void stack<T>::push(const T& entry)
{
	data[used] = entry;
	++used;

}

template <class T>
void stack<T>::pop()
{
	--used;

}

template <class T>
T& stack<T>::top()
{
	
	return data[used - 1];
}

