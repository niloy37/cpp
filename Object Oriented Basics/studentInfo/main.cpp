#include "studentInfo.h"
#include "studentInfo.cpp"
#include <bits/stdc++.h>
#include <cstdio>
#define sf1(x) scanf("%d",&x)


using namespace std;

int deletea (studentInfo a [] , studentInfo obj, int counter){

	for(int i= 0 ; i < counter; i++ ){
		if(a[i].getId() == obj.getId()){
			a[i] = a[counter-1];
		}

	}

	return (counter-1);
}

void retrieve (studentInfo a [] , int id , int counter) {
for( int i = 0 ; i < counter ; i++ ){
if(a[i].getId() == id){
		cout<<"Item is found"<<endl;
		a[i].print();
		cout<<endl;
		break;
	}
 }
}


int main () {
int n;
cout<<"Enter the number of student details you want to add "<<endl;
sf1(n);
int counter = 0;
studentInfo arr [n];
	for(int i= 0 ; i < n ; i++ ){
		string s ; int a , b;
		cout<<"Enter name of "<<i+1<<" : "<<endl;
		cin>>s;
		cout<<"Enter id of "<<i+1<<" : "<<endl;
		sf1(a);
		cout<<"Enter cgpa of "<<i+1<<" : "<<endl;
		sf1(b);
		arr[i].initialize(a,b,s);
		counter++;
	}
	cout<<endl;
	cout<<"Enter the Id you want to delete"<<endl;
	int id; sf1(id);
	bool fbool = false;
	for(auto f : arr){

		if(f.getId() == id){
			fbool=true;
			counter = deletea(arr , f , counter);
			break;
		}
	}

	if(fbool == false ) cout<<"Id not found"<<endl;

	cout<<"Enter the Id your searching "<<endl;
	sf1(id);
	retrieve(arr, id , counter);

	for(int i = 0 ; i < counter ; i++){
		arr[i].print();
		cout<<endl;
	}


}
