#include<bits/stdc++.h>
using namespace std;
int main () {
int a [] = {4,2,8,6};
int temp;
for(int i=0;i<4;i++){
    int j=i;
    if(j>0 && a[j]< a[j-1]){
        temp = a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
        j--;
    }
}

for(int i=0;i<4;i++){
    cout<<a[i]<<" ";
}
}
