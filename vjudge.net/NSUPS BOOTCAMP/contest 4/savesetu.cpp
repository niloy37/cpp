#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
int k=0;
int x;
while ( n--){
    string s;
    cin>>s;
    if(s=="donate"){
        cin>>x;
        k+=x;
    }
    else if(s == "report"){
        cout<<k<<endl;
    }

}


}
