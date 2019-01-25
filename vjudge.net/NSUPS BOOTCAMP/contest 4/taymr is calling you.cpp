#include<bits/stdc++.h>
using namespace std;
int main () {
int a,b,c;
cin>>a>>b>>c;
int count=0;
//int counter1=0,counter2=0;
for(int i=a;i<=c;i+=a){
for(int j=b;j<=i;j+=b){
        if(i==j)
            count++;
    }
}
cout<<count<<endl;
}
