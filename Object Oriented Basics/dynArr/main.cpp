#include <iostream>
#include "dynArr.h"
#include "dynArr.cpp" //have to include cpp file also
using namespace std;

int main()
{
    dynArr<float>list1(10);
    dynArr<int>list2(10);
    list1.setValue(0,6.73);
    list2.setValue(0,5);
    cout<<list1.getValue(0)<<endl<<list2.getValue(0);



    return 0;


}
