#include<bits/stdc++.h>

using namespace std;
int main () {
int n;
cin>>n;
int s;

int arraymax[n];

for(int i=0;i<n;i++){
        cin>>s;
int arrayStudents[s];
for(int j=0;j<s;j++){
    cin>>arrayStudents[j];
}
int m =arrayStudents[0];
for(int k=0;k<s;k++){
    if(arrayStudents[k]>m){
        m=arrayStudents[k];
    }
}
arraymax[i]=m;

}

for(int i=0;i<n;i++){
    cout<<"Case "<<i+1<<": "<<arraymax[i]<<endl;
}
}
