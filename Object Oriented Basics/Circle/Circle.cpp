#include<iostream>
#include<bits/stdc++.h>
#define PI acos(-1)
#include "Circle.h"
#define pf cout
#define sf cin

void Circle::circleInitialize(int x){
    radius = x;
}
int Circle::getRadius(){
    return radius;
}
void Circle::changeRadius(int x){
    radius = x;
}
float Circle::Area(){
    return PI * radius * radius;
}
float Circle::Circumference(){
return 2*PI*radius;
}

