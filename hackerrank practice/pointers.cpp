#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    // Complete this function    
   int p =*a;
    *a = *a+*b;
    int z = p-*b;
    z= (z<0)?z*-1:z;
    *b=z;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

//thanks to mfs so easy
