#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;

    int n;
    cin>>n;
    while(n--){
        cin>>s;
        if(s == "1" || s == "4" || s == "78"){
            cout<<"+\n";
        }
        else if(s[s.size()-1] == '5' && s[s.size()-2] == '3'){
            cout<<"-\n";
        }
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0'){
            cout<<"?\n";
        }
        else cout<<"*\n";


    }
}
