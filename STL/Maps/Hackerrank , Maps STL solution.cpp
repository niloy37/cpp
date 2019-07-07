#include<bits/stdc++.h>
#include<map>
using namespace std;

int main () {
	int qr;
	cin>>qr;
	string s1;
	string s;
	int y; string xz;
	map<string,int>m;
	while(qr--){

		int t;
		cin>>t;
		switch(t){
			case 1 : 
				
				cin>>xz>>y;
				m[xz]+=y;
				break;
		
		case 2 :
			
			cin>>s1;
			m.erase(s1);
			break;

		default :
		
		cin>>s;
		cout<<m[s]<<endl;

	}
}
}
