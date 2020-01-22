#include <iostream>
using namespace std;

class Point{

	public:

		int x,y;

		Point(int k=0,int l=0)
		{
			x=k;
			y=l;
		}
		
		Point&  up(int n=1)
		{
			y=y-n;
			return *this;
		}

		Point& down(int n=1)
		{
			y=y+n;
			return *this;
		}
		
		Point& right(int n=1)
		{
			x=x+n;
			return *this;
		}
		
		Point& left(int n=1)
		{
			x=x-n;
			return *this;
		}
};

class Shape{

	virtual void draw (DispWindow& w)=0;

};

class DispWindow:public Point{

	public:
	
		char** p;
		int m,n;
	
		DispWindow(int x,int y)
		{
	
			m=x;
			n=y;
		
			p=new char*[m];
		
			for(int i=0;i<n;i++)
			{
				p[i]=new char[n];
			}	
		}
	
		~DispWindow()
		{
			for(int i=0;i<m;i++)
			{
				delete [] p[i];
			}
			
			delete [] p;
		}
		
		Point& current()
		{
			return *this;	
		}
		
		Point current(Point a)
		{
			return a;
		}

		void draw(DispWindow& w) 
		{
			p[w.x][w.y]='*';
		}
		
		void show(){}
};
class Dot:public Shape,public Point{

	Dot(int a,int b):Point(a,b)
	{}
	
	void draw(DispWindow& w)
	{
		DispWindow::draw(&w);
	}

};
























