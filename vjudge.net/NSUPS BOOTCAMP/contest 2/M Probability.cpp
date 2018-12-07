#include<bits/stdc++.h>

using namespace std;

int main () {
int t;
cin>>t;

while(t-->0){

    int x; int y;

    cin>>x>>y;
     int def=(y-x)+1;
    int count=0;
    for(int i=x;i<=y;i++){
        if(i%10==0){
            count++;
        }
        else{
            int z=i;
            while(z>0){
                if(z%10==0){count++;
                  break;
                }
                z=z/10;
            }
        }
    }
    cout<<count<<"/"<<def<<endl;
}

}
