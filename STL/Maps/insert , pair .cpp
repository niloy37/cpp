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
//Pair
student.insert(pair<int,string>(6,"StudentSix"));
student.insert(pair<int,string>(7,"StudentSeven"));
student.insert(pair<int,string>(8,"StudentEight"));
//Iterating through the map and printing all the values
for( map<int,string>::iterator it = student.begin() ; it!= student.end() ; it++){
	cout<<it->first<<" "<<it->second<<endl;
}
}

/*
Output - 
1 StudentOne
2 StudentTwo
3 StudentThree
4 StudentFour
5 StudentFive
6 StudentSix
7 StudentSeven
8 StudentEight

C:\Users\Havoc-PC\Documents\Sublime Text>
*/
