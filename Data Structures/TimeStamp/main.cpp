#include <iostream>
#include "TimeStamp.h"
#include "TimeStamp.cpp"
const int size = 5;
using namespace std;
void deleteStamp(TimeStamp *t,TimeStamp tq){
int x,y,z;
cin>>x>>y>>z;
bool f = false;
for(int i = 0;i<size;i++){
    if(tq.compareTo(x,y,z))
        f=true;
    if(f==true)
        t[i]= t[i+1];
}
}
void printStamp(TimeStamp *t){
for(int i=0;i<size;i++){
    cout<<t[i].getValues()<<endl;
}
}


int main()
{
  TimeStamp *t = new TimeStamp[size];

    return 0;
}
