
#include<bits/stdc++.h>

using namespace std;

int main() {
int  x ;
cin>>x;

for(int i=0;i<x;i++){
    int y;
    cin>>y;

    int rev=0;
    while(y>0){
        rev=rev*10+(y%10);
        y=y/10;

    }
    cout<<rev<<endl;
}

}
