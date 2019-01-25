#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
int counter = 0;
int b=0;
int max=0;
int x;
while(n--){
    cin>>x;

    if(x>=b){
        counter++;
        if(counter>=max){
            max=counter;
        }
    }
    else{
        counter=1;
    }
    b=x;


}

cout<<max<<endl;




}
