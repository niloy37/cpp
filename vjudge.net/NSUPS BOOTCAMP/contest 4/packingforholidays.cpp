#include<bits/stdc++.h>
using namespace std;
int main () {
int a,b,c;
int n;
cin>>n;
for(int i =1;i<=n;i++){
    cin>>a>>b>>c;
    string s = (a<=20 && b<=20 && c<=20)? "good" : "bad";
    cout<<"Case "<<i<<": "<<s<<endl;
}

}
