#include<bits/stdc++.h>
using namespace std;

int main () {
int n;
int y;
set<int>s;
cin>>n;
while(n--){
    int x;
    cin>>x>>y;
    if(x==1){
    s.insert(y);
    }
    else if(x==2){
    s.erase(y);
    }
    else{
      set<int>::iterator itr=s.find(y);
      if(itr==s.end()){
        cout<<"No"<<endl;
       }
       else cout<<"Yes"<<endl;
    }
}
}
