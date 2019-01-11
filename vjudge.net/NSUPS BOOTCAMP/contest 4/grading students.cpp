#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int grade;
while(n--){
    cin>>grade;
    if(grade<=37){
        cout<<grade<<endl;
    }
    else {
        if(grade%5>=3){
            cout<<grade+(5-grade%5)<<endl;
        }
        else cout<<grade<<endl;
    }
}


}
