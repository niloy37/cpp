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
  /*
  No duplicate keys , as for example 
  student[4] = "StudentFour Two";
  will output StudentFourTwo instead of StudentFour.
  Last set value will be displayed
  */
cout<<student[4]<<endl;
}
