//Solution by Havoc - Unjudged.
#include<bits/stdc++.h>
#include<map>

using namespace std;
int main () {
	int t;
	cin>>t;
	while(t--){
		int qr;
		cin>>qr;
		map<int,int>q;
		while(qr--){
		char ch;
		cin>>ch;
		if(ch == 'a'){
			int a,b;
			cin>>a>>b;
			//q.insert(make_pair(a,b));
			q[a]=+b;
		}
		else if (ch == 'b'){
			int x;
			cin>>x;
			map<int,int>::iterator it = q.find(x);
			if(it!= q.end())
			cout<<it->second<<" ";
		else cout<<"-1 ";

		}
		else
		{
			for(auto iterator = q.begin() ; iterator != q.end() ; iterator++){
				cout<<iterator->first<<" "<<iterator->second<<" ";
			}
		}
	}
	cout<<endl;
  }
}
