
/*


# Compiler must be c++11 or greater



*/





#include <iostream>
#include "dynArr.h"
#include "dynArr.cpp" //have to include cpp file also
using namespace std;

int main()
{
    dynArr<float>list1(10);
    dynArr<int>list2(10);
    list1.setValue(0,6.73);
    list2.setValue(0,0);
    cout<<list1.getValue(0)<<endl<<list2.getValue(0)<<endl;
    int arr [] {1,2,3,4,5,6,7,8,9};
    float arr2 [] {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    int i=1;
    for(int d : arr){
        list2.setValue(i,d);
    i++;
    }
    i=1;
    for(float f : arr2){
        list1.setValue(i,f);
        i++;
    }
    for(i = 0 ; i < 10;i++){
        cout<<list2.getValue(i)<<" ";
    }
    cout<<endl<<endl;
    for(i = 0 ; i < 10;i++){
        cout<<list1.getValue(i)<<" ";
    }



    return 0;


}
