#include<bits/stdc++.h>
using namespace std;
int product(int n){
if( n == 1)
    return 1;
    else return n* product(n-1);
}


int main () {
 int n;
    n=5;
    
    cout<<product(n);
}
