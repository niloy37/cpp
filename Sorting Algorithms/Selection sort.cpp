#include<bits/stdc++.h>
#include<cstdio>
#define pf printf
#define sf scanf

#define n 7
using namespace std;
int a[n] {4,6,3,2,1,9,7};

void display(){
int i;
pf("\t[");
for( int ap : a) {
    pf("%d ",ap);
}
pf("]\n\n");
}

void selectionSort(){
    for(int i=0;i < n-1 ; i++){
        int indexMin = i;
        for(int j = i+1;j<n;j++){
            if(a[j] < a[indexMin]){
                indexMin = j;
            }
        }
        if(indexMin != i){
            pf("Items Swapped :\t [%d, %d]\n",a[i],a[indexMin]);
            int temp = a[indexMin];
            a[indexMin] = a[i];
            a[i] = temp;
        }
        pf("Iteration %d#:",i+1);
        display();
    }
}


int main () {
    pf("Input Array: ");
    display();
    selectionSort();
    pf("\nOutput Array: ");
    display();
}

/*
Input Array:    [4 6 3 2 1 9 7 ]

Items Swapped :  [4, 1]
Iteration 1#:   [1 6 3 2 4 9 7 ]

Items Swapped :  [6, 2]
Iteration 2#:   [1 2 3 6 4 9 7 ]

Iteration 3#:   [1 2 3 6 4 9 7 ]

Items Swapped :  [6, 4]
Iteration 4#:   [1 2 3 4 6 9 7 ]

Iteration 5#:   [1 2 3 4 6 9 7 ]

Items Swapped :  [9, 7]
Iteration 6#:   [1 2 3 4 6 7 9 ]


Output Array:   [1 2 3 4 6 7 9 ]
*/
