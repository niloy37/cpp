#include<bits/stdc++.h>



using namespace std;
int main () {
int x,y,a,b;
while(cin>>x>>y>>a>>b){
        int n =abs(x-a);
        int m=abs(y-b);
        int q = max(n,m);
        cout<<q<<endl;

}
}
