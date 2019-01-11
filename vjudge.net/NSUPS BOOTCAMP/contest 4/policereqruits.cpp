#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
int policeCount=0,crimeCount=0;
int x;
while(n--){
    cin>>x;
    if(x==-1){

        if(policeCount==0){
           crimeCount++;
           }
    else   policeCount--;
    }
    else {
        policeCount+=x;
    }
}

cout<<crimeCount;

}
