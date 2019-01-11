#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
int maxCount=0,minCount=0;
int max,min;
cin>>n;
int a[n];
int x;
for(int i=0;i<n;i++){
    cin>>x;
    a[i]=x;
    if(i==0){
        max=a[i];
        min=a[i];
    }
    if(a[i]>max){
        max=a[i];
        maxCount++;
    }
    if(a[i]<min){
        min=a[i];
        minCount++;
    }
}

cout<<maxCount<<" "<<minCount<<endl;


}
