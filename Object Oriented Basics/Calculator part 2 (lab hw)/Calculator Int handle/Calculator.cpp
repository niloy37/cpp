#include "Calculator.h"
#include<bits/stdc++.h>



#define pf cout
#define sf cin


 Calculator::Calculator(int x, int y){
  this->a = x;
  this->b = y;
 }

 int Calculator::add(){
 	return a+b;
 }

 int Calculator::multiply(){
 	return a*b;
 }

 float Calculator::divide(){
 	if(a>b) return a/(b*1.0); else return b/(a*1.0);
 }

 int Calculator::subtract(){
 	if(a>b) return a-b; else return b-a;
 }

 void Calculator::setValue(int x , int y){
 	this->a = x;
 	this->b = y;
 }
