#include <iostream>
#include "MyArray.h"
using namespace std;


MyArray::MyArray(int sx){
	size=sx;
	pData=new int[size];
	for(int i=0;i<size;i++){
			pData[i]=0;
	}
}

MyArray::~MyArray(){
	delete []pData;
}

MyArray::MyArray(const MyArray &myA){
	size=myA.size;
	pData=new int[size];
	for(int i=0;i<size;i++){
			pData[i]=myA.pData[i];
		}
	
}
//Array& Array::operator=(const Array& rhs) 
//const MyArray &MyArray ::operator=(const MyArray &myA){
MyArray& MyArray ::operator=(const MyArray& myA){

	size=myA.size;
	for(int i=0;i<size;i++){
			pData[i]=myA.pData[i];
		}
	return *this;
}

bool MyArray::Insert(int d,int idx){
	pData[idx]=d;
		if(idx>=size || idx<0)
			return false;
		else
			return true;		
}

int MyArray::Size(){
	return size;
}

