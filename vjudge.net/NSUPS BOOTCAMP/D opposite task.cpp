#include<bits/stdc++.h>

using namespace std;

int main() {
int n;
cin>>n;
int a[n];
int b[n];
int x;
for(int i=0;i<n;i++){
        int problem;
        cin>>problem;
         (problem>10)?a[i]=problem-10:a[i]=problem;
         (problem>10)?b[i]=10:b[i]=0;

}
for(int i=0;i<n;i++){
    cout<<a[i]<<" "<<b[i]<<endl;
}

}
