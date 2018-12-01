#include<bits/stdc++.h>


using namespace std;
int bigmod(string s , int a){

    int res =0;

    for(int i=0;i<s.length();i++){
        res = (res * 10 + (int)(s[i]-'0'))%a;
    }
    return res;
}
int main () {

    cout<<"Enter a Big Number "<<endl;
    string s;
    getline(cin,s);
    cout<<"Enter the number you want to mod it with"<<endl;
    int a;
    cin>>a;

    cout<<bigmod(s,a);
}
