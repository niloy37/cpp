#include<bits/stdc++.h>
#define pf cout
#define sf cin
#define nl endl
using namespace std;
int main () {
    int x =5;
const int *ptr = &x;

int  *const qtr = &x;

//cannot do *ptr++

//cannot do do qtr =  &newaddress

pf << *ptr<<nl;
pf<< ptr <<nl;
pf<< &x<<nl;
pf<<qtr<<nl;
pf<<*qtr<<nl;
}
