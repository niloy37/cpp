#include<iostream>
#include<map>
using namespace std;
int main () {
map<int,string> student;
student[1] = "StudentOne";
student[2] = "StudentTwo";
student[3] = "StudentThree";
student[4] = "StudentFour";
student[5] = "StudentFive";
//cout<<student[4]<<endl;

//Iterating through the map and printing all the values
for( map<int,string>::iterator it = student.begin() ; it!= student.end() ; it++){
	cout<<it->first<<" "<<it->second<<endl;
}
}
