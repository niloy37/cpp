#include<bits/stdc++.h>

using namespace std;
int main() {

int n;
bool found;
vector <int> v;

while(cin>>n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    found=false;
    for(int i=0;i<n-2;i++){
       int a=v[i];
       int b=v[i+1];
        int c=v[i+2];

        if(a+b > c && b+c > a && c+a > b){
            found = true;
            break;
        }
    }
    (found==true)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}

}
