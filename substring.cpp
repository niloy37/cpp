#include<iostream>
using namespace std;
int substring(string s1,string s2){
    int i,j;
    int s=-1;
    int n=s1.length();
    int m=s2.length();
    for(i=0;i<m;i++){
         for(j=0;j<n;j++)
            if(s2[i+j]!=s1[j])
                break;
                if(j==n)
                return i;













    }

    return -1;




}

int main(){
    string s1;
  getline(cin,s1);
    string s2="geeksforgeeks";
    int s=substring(s1,s2);
    if(s==-1)
    cout<<"no";
    else
        cout<<"yes the substring matched";


}
