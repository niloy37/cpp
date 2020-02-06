//bitwise operators explanation

#include<iostream>

using namespace std;


int main () {

    //bitwise and &
    // 3 - 0011
    // 4 - 0100
    //AND- 0000
    cout<< (3 & 4 )<<endl; //output 0

     //bitwise or | 
     // OR - 0111
     cout<< (3 | 4 )<<endl; //output 7

     //bitwise XOR ^
    // XOR  0111

     cout<< (3 ^ 4 )<<endl; //output 7

     //bitwise shift left 
     // 0011
     // 0110
     cout<< (3 << 1 )<<endl; //output 6
    //0001
    cout<< (3 >> 1 )<<endl; //output 1


    return 0;
}
