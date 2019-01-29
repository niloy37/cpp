#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
while(n--){
int x;
cin>>x;
int f = x%10;
while(x>9){
        x=x/10;
}
cout<<f+x<<endl;
  }
}
