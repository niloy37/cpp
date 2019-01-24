#include<bits/stdc++.h>
using namespace std;
int main () {
int n,t;
cin>>n;
int x,y;
map<pair<int,int>, string> m;
pair<int,int>p;
string z;

while(n--){
        cin>>x>>y;
        p= make_pair(x,y);
        cin>>z;
        map<pair<int,int>, string>::iterator itr = m.find(p);
        if(itr == m.end())
       m.insert(pair<pair<int,int>, string>(pair<int,int>(x,y),z));
       else{
        m[p] = z;
       }


}

cin>>t;

while(t--){
        cin>>x>>y;
        p = make_pair(x,y);
cout<<m[p]<<endl;
}




}
