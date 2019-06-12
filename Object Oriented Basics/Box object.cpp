#include<bits/stdc++.h>
using namespace std;

class Box{
private:
    double length;
    double breadth;
    double height;
public:
    Box (double l=2.0,double b=2.0,double h =2.0){
        cout<<"Box Constructed"<<endl;
        length = l;
        breadth = b;
        height = h;

    }
    double Volume();
    int compare(Box box){
    return this->Volume()> box.Volume();
    }
    };
    double Box::Volume(){
    return length*breadth*height;
    }

    int main () {
    Box Box1(3.3,1.2,1.5);
    Box Box2(8.5,6.0,2.0);

    if(Box1.compare(Box2))
        cout<<"Box2 is smaller"<<endl;
    else cout<<"Box2 is equal or larger"<<endl;
    }
