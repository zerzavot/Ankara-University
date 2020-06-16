#include<iostream>
#include "Shapes.h"
using namespace std;

int main(){

	Rectangle r1("rect1",2,4),r2("rect2",3,6);
	Triangle t1("tri1",2,3),t2("tri2",4,9);
	Polygon* p[]={&r1,&r2,&t1,&t2};

	for(int i=0;i<4;i++){
		cout<<p[i]->getName()<<", area: "<<p[i]->getArea()<<"\n";
	}


}
