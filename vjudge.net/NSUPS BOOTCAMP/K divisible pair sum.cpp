#include<bits/stdc++.h>
int divisibleSumPairs(int n,int ar [],int k){
    int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i<j){
            if((ar[i]+ar[j])%k==0){
                count++;
            }
        }
    }
}
return count;
}



using namespace std;
int main() {
int n;
cin>>n;
int k;
cin>>k;
int ar[n];
for(int i=0;i<n;i++)
    cin>>ar[i];
cout<<divisibleSumPairs(n,ar,k);

}

