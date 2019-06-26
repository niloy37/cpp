#include<iostream>
using namespace std;
struct test {
int a,
int *b ; 
}
int main () {
test t1,t2;
t1.a = 100;
t2.a = 200;
t1.b = &var2.a;

cout<<t1.t<<endl<<t2.a<<endl<<t1.b<<endl<<t2.b<<endl<<endl<<endl<<t1.b<<endl<<t2.b;

}
