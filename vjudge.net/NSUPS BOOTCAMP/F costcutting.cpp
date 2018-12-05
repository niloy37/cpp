#include<bits/stdc++.h>


using namespace std;


int main () {
int n;
cin>>n;

int a[n];
int x,y,z;
for(int i=0;i<n;i++){
cin>>x>>y>>z;
 if(x>=z&&z>=y || y>= z&& z>=x)
    a[i]=z;

    if(z>=x&&x>=y || y>=x&& x>=z)
        a[i]=x;

    if(x>=y&&y>=z || z>=y&&y>=x)
        a[i]=y;

 }

for(int i=0;i<n;i++){
    cout<<"Case "<<i+1<<": "<<a[i]<<endl;
}
}

