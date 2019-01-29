#include<bits/stdc++.h>
using namespace std;
int main () {
string s;
cin>>s;
string h ="hello";
int c=0,a=0;
for(int i=0;i<s.size();i++){
    if(s[i]==h[a]){
        c++;
        a++;
    }
}
(c==5)?cout<<"YES"<<endl:cout<<"NO"<<endl;




}
