#include<bits/stdc++.h>
using namespace std;
int main () 
{
    string s;
    cin>>s;
    long long int lc=0;
    for(char ch : s){
        if(ch == '4' || ch == '7'){
            lc++;
        }
    }
    bool f = true;

    stringstream ss;
    ss << lc;
    string st = ss.str();
    for(char ch : st){
        if(ch != '4' && ch != '7'){
            f = false;
        }
    }
    if(f) cout<<"YES";
    else cout<<"NO"; 
    return 0;
}
