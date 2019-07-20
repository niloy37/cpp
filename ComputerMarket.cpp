//Graphing techniques BFS and DFS


#include<bits/stdc++.h>


using namespace std;

int main () {
    int n;cin>>n;
    int a,b,c,x,y,bd;
    for(int i=0;i<n;i++){
            cin>>bd;
            cin>>a>>b>>c>>x>>y;
            if(a+b+c+x+y <= bd)
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

    }
}
