#include <vector>
 #include <iostream> 
 #include <list>
 #include<algorithm>
 #include <functional>  
 #include <numeric> 
 #include <set> 
 using namespace std;

/*
		int main()
		{
		
				int arr1[]= { 1, 5, 2, 3, 4 }; 
				list<int>  l1(arr1, arr1+5); 
				// initialize l1 with arr1
				 int sum = accumulate(l1.begin(), l1.end() , 2, plus<int>());
				 list<int>::iterator iter;
				 cout<<sum<<endl;
				 for(iter=l1.begin();iter!=l1.end();++iter){
				 cout<<*iter<<" ";
				 }
				 cout<<endl;
				  int sum1 = accumulate(l1.begin(), l1.end(),3);
				    for(iter=l1.begin();iter!=l1.end();++iter){
				 cout<<*iter<<endl;
				 }
				 cout<<sum1<<endl;
				  // equivalent 
				  int fac = accumulate(l1.begin(), l1.end() , 1, std::multiplies<int>()); 	
				  cout<<fac;
					//User Defined Function Objects -----------------------------------------
					
					
					
					
					
		return 0;
		 }
 
 //SENDEN SONRA BEN SKJDKDFJSFHOHG
//   :(
int main()
{

	int arr1[]= { 10,20,30,40,50 }; 
	list<int>  l1(arr1, arr1+5); 
	template<class InputIt, class T, class BinaryOperation>
	 T accumulate(InputIt first, InputIt last, T init, BinaryOperation op)  
	 {   for (; first != last; ++first)   
	 	{    init = op(init, *first);   }     
	 return init;  } 
 class squared_sum //user defined functýon object
{
	public:
	int operator()(int n1,int n2){
	return n1+n2*n2;
	}
};
int sq=accumulate(l1.begin(),l1.end(),0,squared_sum());
//squared sum wasnt declered diyo cozemedým
cout<<sq;
}

int main(){

//USER DEFÝENED FUNCTIONS OBJECTS
template <class T> 
class squared_sum  
// user-defined function object 
{    
public:       
T operator()(T n1, T n2) { return n1+n2*n2; }  
};  

vector<complex> vc; 
complex sum_vc; 
vc.push_back(complex(2,3)); 
vc.push_back(complex(1,5)); 
vc.push_back(complex(-2,4)); 
sum_vc = accumulate(vc.begin(), vc.end() ,                   
			complex(0,0) , squared_sum<complex>() ); 
cout<<sum_vc;
			// computes the sum of squares of a vector of complex numbers 
	
		}
		int main(){
		
		//SET S MULTISETS 
		//#include <set> 
		string names[] = {"ALÝ","AYSE","MEHMET","ZEH","KEH"};  
		set<string, less<string> > nameSet(names,names+5); 
		// create a set of names in which elements are alphabetically 
		// ordered string is the key and the object itself 
		nameSet.insert("HACER");
		for(int i=0;i<6;i++)
		cout<<i<<names[i]<<endl;
		// inserts more names 
		nameSet.insert("KAMÝL"); 
		for(int i=0;i<7;i++)
		cout<<i<<names[i]<<endl;
		nameSet.erase("KEH"); 
		for(int i=0;i<6;i++)
		cout<<i<<names[i]<<endl;
		// removes an element 
		set<string, less<string> >::iterator iter; 
		// set iterator 
		string searchname;  
		cin >> searchname; 
		iter=nameSet.find(searchname);  
		// find matching name in set 
		if (iter == nameSet.end())    
		// check if iterator points to end of set    
		cout << searchname << "NOT ÝN SET" <<endl; 
		else   cout << searchname << "IS IN SET!!" <<endl; 
		}
		
		//
		string names[] = {"A","B","C","D","E","F","G","H"};  
		set<string, less<string> > nameSet(names,names+7); 
		set<string, less<string> >::iterator iter; 
		// set iterator 
		iter=nameSet.lower_bound(”K”);  
		// set iterator to lower start value ”K” 
		while (iter != nameSet.upper_bound(”Q”))  
		 cout << *iter++ << endl; 
		 
		 
		 int main()
		 {
		 	int myints[]={1,2,3,3,2,1,1,2};
		 	vector<int>v(myints,myints+8);
		 	sort(v.begin(),v.end());
		 	vector<int>::iterator low,up;
		 	low=std::lower_bound(v.begin(),v.end(),2);
		 	up=std::upper_bound(v.begin(),v.end(),2);
		 	
		 	cout<<"lower bound position "<<(low-v.begin())<<endl;
		 	cout<<"upper bound position"<<(up-v.begin())<<endl;
		 	return 0;
		 }*/
int main()
{
	int arr[]={1,7,9,23,34,47,67,89,123,234,345,567};
	int len=sizeof(arr)/sizeof(arr[0]);
	vector<int>v(arr,arr+len);
	vector<int>::iterator upper;
	upper=upper_bound(v.begin(),v.end(),123);
	cout<<(upper-v.begin())<<endl;
	return 0;
}

////////////////////36.slayt
