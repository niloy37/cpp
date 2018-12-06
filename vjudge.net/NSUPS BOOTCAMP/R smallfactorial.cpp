#include<bits/stdc++.h>
using namespace std;
int main () {
int x;
cin>>x;
int a;
for(int i=0;i<x;i++){
fflush(stdin);
         cin>>a;
int fac=1;
for(int k=a;k>1;k--){
    fac*=k;
}
cout<<fac<<endl;

}

}
