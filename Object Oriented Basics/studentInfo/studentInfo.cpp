#include "studentInfo.h"
#include<bits/stdc++.h>
using namespace std;

studentInfo::studentInfo(){
	studentId = 0;
	cgpa = 0;
	name = "";
}
studentInfo::studentInfo(int a , int b, string c){
	this->studentId = a;
	this->cgpa = b;
	this->name = c;
}

void studentInfo::print(){
	cout<<this->studentId<<", "<<this->name<<", "<<this->cgpa;
}

int studentInfo::getId(){
	return this->studentId;
}

void studentInfo::initialize(int a , int b, string c){
	studentId = a;
	cgpa = b;
	name = c;
}
