#include<iostream>
using namespace std;


struct struct1{
    short int a;
    unsigned int b;
};

struct struct2{
    short int c = 1;
    short int d = 2;
    struct struct3{
        long double  e = 3;
        char f = 4;
    }g;
};

char somefunc(char p , float q){
    struct2 r;
    char s;
    if(q>0)
    s = p * 2;
    else 
    s = p * (-2);
    return s;
}

short int main() 
{
    char i;
    float j;
    int k[3];

    struct1 m;
    i= 10;
    j=20;
    somefunc(i,j);
    return 0;
}


