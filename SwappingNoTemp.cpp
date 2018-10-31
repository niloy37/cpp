#include<iostream>
using namespace std;

int swapNoTemp(int x,int y){
x=x+y;
y=x-y;
x=x-y;
cout<<"New value  X="<<x<<" Y ="<<y<<endl;
return 0;
}




int main () {

int x,y;

cout<<"Enter x and y"<<endl;
cin>>x;
cin>>y;
cout<<"Current value  X="<<x<<" Y ="<<y<<endl;
swapNoTemp(x,y);

}

