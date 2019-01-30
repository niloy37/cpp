#include<bits/stdc++.h>
using namespace std;
int main () {
string s;
int n;
cin>>n;
while(n--){
    int oneCount=0;
    string s;
    cin>>s;
    if(s.size() == 5)
        cout<<"3"<<endl;
    else{
        if(s[0]=='o'){
            oneCount++;
        }
        if(s[1]=='n'){
            oneCount++;
        }
        if(s[2]=='e'){
            oneCount++;
        }

        (oneCount >=2)?cout<<"1"<<endl:cout<<"2"<<endl;
    }

}
}
