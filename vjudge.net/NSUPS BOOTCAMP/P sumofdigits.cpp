#include<bits/stdc++.h>

using namespace std;

int main() {
int  x ;
cin>>x;

for(int i=0;i<x;i++){
    int y;
    cin>>y;
    int sum=0;
    int rem;
    while(y>0){
        rem= y%10;
        y=y/10;
        sum+=rem;
    }
    cout<<sum<<endl;
}

}
