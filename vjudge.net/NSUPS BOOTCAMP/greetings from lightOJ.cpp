#include<bits/stdc++.h>


using namespace std;

int main () {
int n;
cin>>n;

int ar[n];
for(int i=0;i<n;i++){
    int x;int y;
    cin>>x>>y;
    ar[i]=x+y;

}
for(int i=0;i<n;i++){
    cout<<"Case "<<i+1<<": "<<ar[i]<<endl;
}


}
