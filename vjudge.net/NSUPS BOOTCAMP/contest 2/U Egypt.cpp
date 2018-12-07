#include<bits/stdc++.h>

using namespace std;

int main () {

int x,y,z;

while(cin>>x>>y>>z){
    if(x==0 && y==0 && z==0) break;
    if(x>0&&y>0&&z>0){
    if((pow(x,2)== pow(y,2)+pow(z,2))||(pow(y,2)==pow(x,2)+pow(z,2))||(pow(z,2)==pow(x,2)+pow(y,2))){
        cout<<"right"<<endl;
    }
    else cout<<"wrong"<<endl;
}
else cout<<"wrong"<<endl;
}


}
