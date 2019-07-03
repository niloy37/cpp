#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include<iostream>
using namespace std;
class studentInfo {
	private :
		int studentId;
		int cgpa;
		string name;
	public :
		studentInfo();
		studentInfo(int,int,string);
		void initialize(int,int,string);
		void print();
		int getId();

};



#endif // STUDENTINFO_H_INCLUDED
