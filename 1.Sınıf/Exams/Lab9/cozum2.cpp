#include <iostream>
using namespace std;

class C1
{
	public:
	    C1(){
 
	    }
	    C1(int d,int f){
	       a = d;
	       b = f;
	       cout<<"Constructor C1:"<<a<<" "<<b<<endl; 
	    }
	    C1(int d){
	       a = d;
	       b = 3;
	       cout<<"Constructor C1:"<<a<<" "<<b<<endl; 
	    }
	    /*
	    ~C1(){
	        cout<<"Destructor C1:"<<a<<" "<<b<<endl;
	    }
	    */
	    C1 operator +(const C1& d){
            
            a = a + d.a;
            b = b + d.b;
            
            return *this;
        }
        friend ostream &operator<<(ostream &out,const C1 &d);
	    int geta()const{
	        return a;
	    }
	    int getb()const{
	        return b;
	    }
	    void seta(int d){
	        a = d;
	    }
	    void setb(int d){
   	        b = d;
	    }
	    
	private:
		int a;
		int b;
};
ostream &operator<<(ostream &out,const C1 &d){

    out<<d.a<<"###"<<d.b;
    
    return out;
}
class C2
{
    public:
        C2(int d):x(d,2){
            y = 3;
            int f = 2;
            cout<<"Constructor C2:"<<d<<" "<<f<<" "<<y<<endl;
        }
	    C2(int f,int s,int t):x(f,s){
	        y = t;
	        
	        cout<<"Constructor C2:"<<f<<" "<<s<<" "<<t<<endl;
	    }
	    void sety(int d){
	        y = d;
	    }
	    int gety(){
	        return y;
	    }
	    
	    
	    ~C2(){
	        cout<<"Destructor C2"<<endl;
	    }
	    
	    
	protected:
		C1 x;
		int y;
};


class C3 : public C2
{
    public:
        C3(int f):C2(2,3,4){
            int l;
            b = f;
            int s = 2;
            int t = 3;
            l = 4;
            cout<<"Constructor C3:"<<f<<" "<<s<<" "<<t<<" "<<l<<endl;
        }
        
        C3(int f,int s,int t):C2(s,t,4){
            int l;
            b = f;
            l = 4;
            cout<<"Constructor C3:"<<f<<" "<<s<<" "<<t<<" "<<l<<endl;
        }
        
		friend ostream &operator<<(ostream &out,const C3 &d);
	private:
		int b;
};
ostream &operator<<(ostream &out,const C3 &d){
    int f = d.C2::y;
    int s = d.C2::x.geta();
	// int s = d.C2::x.geta();
    int t = 0;
    int l = 0;
    out<<d.b<<"@@"<<f<<"@@"<<s<<"@@"<<t<<"@@"<<l;
    
    return out;
}
class C4 : public C1
{
    public:
    
    C4(int d):C1(3,4){
        x = d;
        y = 2;
        cout<<"Constructor C4:"<<x<<" "<<y<<" "<<geta()<<" "<<getb()<<endl;
    }/*
    ~C4(){
        cout<<"Destructor C4:"<<x<<" "<<y<<" "<<geta()<<" "<<getb()<<endl;
    }
    */
	private:
		int x;
		int y;
};
void function1(int a, int b)
{
	C1 x1(a);
	C2 y1(b);

}

void function2(int a, int b)
{
	C3 x2(a);
	C4 y2(b);

}
int main()
{
	int c, d, i, j, x1, y1, z1;
	cin>>c>>d;
	cin>>i>>j;
	cin>>x1>>y1>>z1;

	function1(c,d);
	function2(i,j);
	

	C3 x3(x1,y1,z1);
	
	cout<<x3<<endl;
	
	C1 x4(i,j);
	cout<<x4+x4<<endl;
	
	return 0;
}

