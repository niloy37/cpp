#include<bits/stdc++.h>

using namespace std;
int main () {

int n;
cin>>n;

string s[n];

for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    if(a>b)
        s[i]=">";
    else if(a<b)
        s[i]="<";
    else s[i]="=";
}
for(int i=0;i<n;i++){
    cout<<s[i]<<endl;
}

}
