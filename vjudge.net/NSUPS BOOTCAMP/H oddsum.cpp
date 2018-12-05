#include<bits/stdc++.h>

using namespace std;
int main() {
int n;
cin>>n;
int asum[n];
for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int j=a;j<=b;j++){
        if(j%2!=0) sum+=j;
    }
    asum[i]=sum;
}
for(int i=0;i<n;i++){
    cout<<"Case "<<i+1<<": "<<asum[i]<<endl;
}
}
