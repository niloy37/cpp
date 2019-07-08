//Sum upto N numbers reccursively 


#include<bits/stdc++.h>
using namespace std;
 int recSum (int n){
 	if( n == 1)
 		return 1;
 	else return n + recSum(n-1);
 } 


 int main () {
 	int n;
 	cin>>n;
 	cout<<recSum(n)<<endl;
 }
