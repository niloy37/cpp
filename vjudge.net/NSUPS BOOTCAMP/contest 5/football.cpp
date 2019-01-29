#include<bits/stdc++.h>
using namespace std;
int main () {

string s;
bool f =false;
cin>>s;
int con1=0,con0=0;
for(int i=0;i<s.size();i++){
    if(s.at(i)=='1'){
        con0=0;
        con1++;
    }
    else{
        con1=0;
        con0++;
    }
    if(con1 == 7 || con0 == 7){
        cout<<"YES"<<endl;
        f = true;
        break;
    }
}
if(f==false){
    cout<<"NO"<<endl;
}

}
