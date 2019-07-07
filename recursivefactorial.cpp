#include<bits/stdc++.h>
using namespace std;


int fact (int x){
if(x == 1) return 1;
else return x*fact(x-1);
}
int main () {
	int n;
	cout<<"Enter n ?:"<<endl;
	cin>>n;
	//int ans =fact(n);
	cout<<fact(n);
}
