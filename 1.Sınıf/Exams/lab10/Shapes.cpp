
#include<iostream>
#include "Shapes.h"
using namespace std;



void Rectangle::setHeight(int h){this->height=h;}
void Rectangle::setWidth(int w){this->width=w;}
void Rectangle::setName(string s){this->name=s;}

int Rectangle::getHeight()const{return height;}
int Rectangle::getWidth()const{return width;}

double Rectangle::getArea(){
	return getHeight()*getWidth();
}

string Rectangle::getName(){
	return name;
}

Rectangle::Rectangle(string isim,int en,int boy){
	setWidth(en);
	setHeight(boy);
	setName(isim);
	
}

void Triangle::setHeight(int h){this->height=h;}
void Triangle::setWidth(int w){this->width=w;}
void Triangle::setName(string s){this->name=s;}

int Triangle::getHeight()const{return height;}
int Triangle::getWidth()const{return width;}

double Triangle::getArea(){
	return getHeight()*getWidth()*0.5;
}

string Triangle::getName(){
	return name;
}

Triangle::Triangle(string isim,int en,int boy){
	setWidth(en);
	setHeight(boy);
	setName(isim);
	
}
