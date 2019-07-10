#include<bits/stdc++.h>
using namespace std;

int main () {
string s;
cin>>s;
bool f = true;
int j = (int) s.size() -1 ;
for(int i = 0; i< (int)s.size()/2 ; i++,j--){
    if(s[i] != s[j])
        f = false;
}

if(f==true)cout<<"Palindrome";
else cout<<"Not Palindorme";


}
