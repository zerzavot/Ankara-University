/*
*
* Write three classes conforming the relation shown above, i.e. A Rectangle is a Polygon, a Triangle
* is a Polygon. Each polygon has two fundamental functions: getArea and getName,
* which will be defined as below:
*
* double getArea()  string getName()
*
*
*
*
*/
#include<iostream>
using namespace std;

class Polygon{ //abstract class

public:
	virtual double getArea()=0;
	virtual string getName()=0; //if we didnt use pure ,it will be better i think


// Polygon class will be defined as an abstract class, in which the two functions mentioned 
// above will be defined as pure virtual functions

private:

};



class Rectangle:public Polygon{

public:
	Rectangle(string ,int,int);
//SET
	void setHeight(int );
	void setWidth(int );
	void setName(string);
//GET
	int getHeight()const;
	int getWidth()const;
//VIRTUAL
	virtual double getArea();
	virtual string getName();

private:
	int height,width;
	string name;



};



class Triangle:public Polygon{

public:
	Triangle(string ,int,int);
//SET
	void setHeight(int );
	void setWidth(int );
	void setName(string);
//GET
	int getHeight()const;
	int getWidth()const;
//VIRTUAL
	virtual double getArea();
	virtual string getName();

private:
	int height,width;
	string name;



};
