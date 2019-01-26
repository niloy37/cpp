#include<bits/stdc++.h>
using namespace std;
int main () {
int N,B,H,W,p,a;
int low;
int price;

while(cin>>N>>B>>H>>W){
        low = 500001;
    for(int i=0;i<H;i++){
        cin>>p;
        for(int j =0; j<W;j++){
            cin>>a;
            if(a>= N){
                price= p*N;
                if(price<low){
                low = price;
            }
            }

           // if(i ==0 && j==0) low = price;

        }

    }
    if(low<= B){
        cout<<low<<endl;
    }
    else
        cout<<"stay home"<<endl;
}



}
