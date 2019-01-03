#include<bits/stdc++.h>


using namespace std;

long long int nCr(long long int n){
if(n<2)
    return 0;
else return (n*(n-1)/2);
}

int main (){
long long int m,n,min,max;
cin>>n;
cin>>m;

min = (m-n%m)*(nCr(n/m))+(n%m)*(nCr(n/m+1));
max = nCr(n-m+1);

cout<<min<<" "<<max<<endl;



}
