#include <iostream>
using namespace std;

template<typename T> 
T increment(T value,T amount)
{
		T result=0;
		result += value + amount;
		cout<<result<<"\n";
		return result;
}

class Money{
	
   		int lira;
   		int kurus;
    		
	public: 

		Money(int x=0,int y=1){
			
			lira=x;
			kurus=y;
			
		}
		
	 friend ostream& operator << (ostream& os,const Money& a);
	 
	Money& operator + (const Money& a)
	{
		kurus=a.kurus+kurus;
		
		if(kurus>=100)
		{
			lira=lira+(kurus/100);
			kurus=kurus%100;
		}
		
		lira=lira+a.lira;
		
		return *this;
	}
	
	Money& operator += (const Money& a)
	{
		kurus=a.kurus+kurus;
		if(kurus>=100)
		{
			lira=lira+kurus/100;
			kurus=kurus%100;
		}
		
		lira=lira+a.lira;
		
		return *this;
	}
};

ostream& operator << (ostream& os,const Money& a)
{
	os<<a.lira<<","<<a.kurus<<" "<<"TL";
	return os;
}
int main()
{
	int a = 2;
	double b = 3.45;
	Money k(3,75);
	Money m(2,50);
	a = increment (a,5); // should print 7
	b = increment (b,4.5); // should print 7.95
	k = increment(k,m); // should print 6,25 TL
	return 0;
}

