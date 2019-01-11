#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
int x;
vector<string> s;
int a[10];
cin>>n;

while(n--){
        bool ordrGreat=true;
        bool ordrSmall = true;

    for(int i=0;i<10;i++){
        cin>>x;
        a[i]=x;
    }
    int j;
    for(j=0;j<9;j++){
        if(a[j]>a[j+1])
       ordrSmall = false;

        if(a[j]<a[j+1])
         ordrGreat = false;
    }
    if(ordrGreat == false && ordrSmall == false){
        s.push_back("Unordered");

    }
    else s.push_back("Ordered");
}


cout<<"Lumberjacks:"<<endl;
for(int i=0;i<s.size();i++){
    cout<<s.at(i)<<endl;
}



}

