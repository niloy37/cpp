#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
long int x,y,z;
for(int i=0;i<n;i++){
    cin>>x>>y>>z;
    if(x+y>z && x>0 && y>0 && z>0){
        if(x==y && y==z){
            cout<<"Case "<<i+1<<": "<<"Equilateral"<<endl;
        }
         else if(x==y && y!= z || y==z && y!=x || z==x && z!=y)  cout<<"Case "<<i+1<<": "<<"Isosceles"<<endl;
        else {
             cout<<"Case "<<i+1<<": "<<"Scalene"<<endl;
        }

    }
    else {
        cout<<"Case "<<i+1<<": "<<"Invalid"<<endl;
    }
}
}
