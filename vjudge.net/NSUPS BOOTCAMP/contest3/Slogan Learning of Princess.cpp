#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
getchar();
string f,s;
map<string,string>str;

while(n--){

        getline(cin,f);
        getline(cin,s);
        str[f]=s;
}
int z;
cin>>z;
getchar();

while(z--){
getline(cin,f);
cout<<str[f]<<endl;
    }

}
