#include<bits/stdc++.h>
using namespace std;
int main () {
vector <int> v;


int size;
cin>>size;
for(int i=0;i<size;i++){
    int c;
    cin>>c;
    v.push_back(c);
}


int r;
cin>>r;
v.erase(v.begin()+(r-1));
int x,y;
cin>>x>>y;
v.erase(v.begin()+(x-1),v.begin()+(y-1));


cout<<v.size()<<endl;
for(int i=0;i!=v.size();i++){
    cout<<v.at(i)<<' ';
}


}
