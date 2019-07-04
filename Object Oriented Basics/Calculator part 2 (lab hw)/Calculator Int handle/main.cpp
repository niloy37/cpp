#include "Calculator.h"
#include "Calculator.cpp"

#include<bits/stdc++.h>

#define pf cout
#define sf cin


using namespace std;


int main () {
	//value inside constructor;
	//additional function setValue(T , T) , have to change both at a time
	Calculator b(9,6), a(6 ,9);
	//for a
	pf<<"Values for Obj a :"<<endl;
	pf<<"Addition : "<<a.add()<<endl<<"Subtraction : "<<a.subtract()<<endl<<"Division : "<<a.divide()<<endl<<"Multiplication : "<<a.multiply()<<endl<<endl;
	//for b
	pf<<"Values for Obj b :"<<endl;
	//printf("%.2f",b.subtract()) must include cstdio  or use setprecision function for viewing upto 2 decimal places
	pf<<"Addition : "<<b.add()<<endl<<"Subtraction : "<<b.subtract()<<endl<<"Division : "<<b.divide()<<endl<<"Multiplication : "<<b.multiply()<<endl<<endl;
}
