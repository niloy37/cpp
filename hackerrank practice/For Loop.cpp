#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    string s[10]={"zz","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++){
        if(i>=1 && i <=9)
        cout<<s[i]<<endl;
        else {
            
            string s = (i%2==0)?"even":"odd";
            cout<<s<<endl;
        }
    }
    return 0;
}

