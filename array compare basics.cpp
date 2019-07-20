#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int s1=0,s2=0;
    int x,y;
    while(n--){
        cin>>x>>y;
        s1+=x;
        s2+=y;
    }
    if(s1>s2) cout<<"Array 1 is greater";
    else if (s2>s1) cout <<"Array 2 is greater";
    else cout<<"Both the array are same";
}
