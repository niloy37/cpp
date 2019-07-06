#include<bits/stdc++.h>
using namespace std;


int main () {
	int a,b,c;
	cout<<"Enter three sides of the triangle"<<endl;
	cin>>a>>b>>c;
	if(a>=1 && b>=0 && c>=0){
		if((a+b>c) && (b+c>a) && (c+a>b)) cout<<"Triangle can be constructed"<<endl;
		else cout<<"Triangle cannot be constructed"<<endl;

	}
	else  cout<<"Triangle cannot be constructed with the given sides(Length cannot be negative)"<<endl;
	

}
