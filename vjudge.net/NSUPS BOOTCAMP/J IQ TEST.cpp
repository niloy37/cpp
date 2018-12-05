#include<bits/stdc++.h>

using namespace std;
int main () {
int n;
cin>>n;

int a[n];
int evens=0,odds=0;
int sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    (a[i]%2==0)?evens++:odds++;

}
if(evens>odds){
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
                cout<<i+1;

        }
    }
}
else {
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cout<<i+1;
        }
    }
}




}
