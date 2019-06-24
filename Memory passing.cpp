//gcc 5.4.0
#include<cstdio>
#include<iostream>
using namespace std;
void print(bool &found) {
    found = true;
    cout<<found<<endl;
}
int main(void)
{
    bool result;
    result = false;
    cout<<result<<endl;
    print(result);
    
    
}
