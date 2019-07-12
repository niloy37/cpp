#include<bits/stdc++.h>
using namespace std;

void toUpper(string &s){
for(int i =0 ; i <(int) s.size();i++){
	if(s[i] >= 'a'){
		s[i]-=32;
	}
}

}
void toLower(string &s){

for(int i =0 ; i <(int) s.size();i++){
	if(s[i] <= 'Z'){
		s[i]+=32;
	}

}
}

int main () {
	string s;
	cin>>s;
	cout<<"Press 0/1 for toLower and toUpper respectively"<<endl;
int n;cin>>n;
switch(n){
	case 0 : toLower(s);cout<<s;break;
	case 1 : toUpper(s);cout<<s;break;
	default: cout<<"Invalid Command, Terminating program";
}
}

