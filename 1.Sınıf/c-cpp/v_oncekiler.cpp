/* int arr[] = { 12, 3, 17, 8 };  
// standard C array 
vector<int> v(arr, arr+4);  
// initialize vector with C array  
while (!v.empty()) 
// until vector is empty
 {     cout << v.back() <<" ";  
  // output last element of vector     
  v.pop_back();                 
  // delete the last element 
  } 
  cout << endl;
 
  
 ----------------------------------------
 
int arr[] = { 12, 3, 17, 8 };  
// standard C array 
vector<int> v(arr, arr+4); 
 // initialize vector with C array 
  vector<int>::iterator iter=v.begin(); 
   // iterator for class vector 
   // define iterator for vector and point it to first element of v 
   cout << "first element of v=" << *iter<<endl; 
   // de-reference iter 
   iter++;  
   cout<<*iter<<endl;
   // move iterator to next element 
   iter=v.end()-1;  
   cout<<*iter<<endl;
   // move iterator to  last element 
  return 0;*/
  int main(){
  /*
int arr[] = { 12, 3, 17, 8 };  // standard C array 
vector<int> v(arr, arr+4);  
int i;
// initialize vector with C array  
for (vector<int>::iterator i=v.begin(); i!=v.end(); i++) 
// initialize i with pointer to first element of v 
// i++ increment iterator, move iterator to next element 
{     cout << *i << " ";   // de-referencing iterator returns the                              
// value of the element the iterator points at  
} 
cout << endl; 
//COZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
void show(int n=0)  
{    
cout << n << " ";  
} 
 
 int arr[] = { 12, 3, 17, 8 }; 
  // standard C array 
  vector<int> v(arr, arr+4);  
  // initialize vector with C array 
   for_each (v.begin(), v.end(), show()); 
   // apply function show                 
    // to each element of vector v 
    
 int key; 
 int arr[] = { 12, 3, 17, 8, 34, 56, 9  }; 
  // standard C array
   vector<int> v(arr, arr+7); 
    // initialize vector with C array  
	vector<int>::iterator iter; 
	cout << "enter value :"; 
	cin >> key; 
	iter=find(v.begin(),v.end(),key); 
	// finds integer key in v 
	if (iter != v.end()) 
	// found the element    
	cout << "Element " << key << "found"<< endl; 
	else   
	cout << "Element " << key << "not in vector v" << endl;
 
 
 bool mytest(int n) { return (n>21) && (n <36); } ;
 int arr[] = { 12, 3, 17, 8, 34, 56, 9  };  
 // standard C array 
 vector<int> v(arr, arr+7);  
 // initialize vector with C array  
 vector<int>::iterator iter; iter=find_if(v.begin(),v.end(),mytest);    
 // finds element in v  for which mytest is true  
 if (iter != v.end()) 
 // found the element    
 cout << "found " << *iter << endl;
  else   
  cout << "not found" << endl; 
 
 bool mytest(int n) 
 { if((n>14) && (n <36)) return 1;
 else return 0;
 };
 int arr[] = { 12, 3, 17, 8, 34, 56, 9  }; 
  // standard C array 
  vector<int> v(arr, arr+7);
    // initialize vector with C array
	  int n=count_if(v.begin(),v.end(),mytest); 
	     // counts element in v  for which mytest is true
		   cout << "found" << n <<"elements"  << endl; 
		   
		
		 int arr1[]= { 1, 3, 5, 7, 9 };
		  int arr2[]= { 2, 4, 6, 8, 10 }; 
		  list<int>  l1(arr1, arr1+5); 
		  // initialize l1 with arr1 
		  list<int>  l2(arr2, arr2+5);
		   // initialize l2 with arr2 
		   copy(l1.begin(), l1.end(), l2.begin());  
		      // copy contents of l1 to l2 overwriting the elements in l2  
			    // l2 = { 1, 3, 5, 7, 9 }   
			*/
