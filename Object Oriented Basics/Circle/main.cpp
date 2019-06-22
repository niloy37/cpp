#include "Circle.h"
#include<iostream>
#define pf cout
#define NL '\n'
using namespace std;



int main (){
    Circle c1;
    c1.circleInitialize(3);
    pf<<c1.Area()<<NL;
    pf<<c1.Circumference()<<NL;
    pf<<c1.getRadius()<<NL;

}



