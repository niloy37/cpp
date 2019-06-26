#include<bits/stdc++.h>
using namespace std;
struct Datatype {
    int a;
    Datatype *b;
};
int main () {
Datatype d1,d2,d3,d4,d5;
d1.b =  &d2;
d2.b = &d3;
d3.b = &d4;
d4.b = &d5;
d5.a = 5;

cout<< d1.b->b->b->b->a<<endl;

    return 0;
}
