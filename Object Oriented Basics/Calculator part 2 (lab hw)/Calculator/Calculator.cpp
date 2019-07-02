#include "Calculator.h"
#include<bits/stdc++.h>



#define pf cout
#define sf cin

using namespace std;

template<class T>
 Calculator<T>::Calculator(T x, T y){
  this->a = x;
  this->b = y;
 }
 template<class T>
 T Calculator<T>::add(){
 	return a+b;
 }
 template<class T>
 T Calculator<T>::multiply(){
 	return a*b;
 }
  template<class T>
 T Calculator<T>::divide(){
 	if(a>b) return a/b; else return b/a;
 }
  template<class T>
 T Calculator<T>::subtract(){
 	if(a>b) return a-b; else return b-a;
 }
 template<class T>
 void Calculator<T>::setValue(T x , T y){
 	this->a = x;
 	this->b = y;
 }
