#include<iostream>
using namespace std;

int main () {
    
    int gcd(int a, int b){
        if(a == 0)
        return b;

        return gcd(b % a, a);
    }
    
    return 0;

}


