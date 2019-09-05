//unjudged
#include<iostream>
using namespace std;

int main (int argc,char** argv){
   int n,m;
   cin>>n>>m;
   char s[n][m];
   for(int i=0;i<n;i++){
       for(int j=0; j<m ;j++){
           cin>>s[i][j];
       }
   }
   int arr[n][m];
   for(int i = 0 ; i < n;i++){
       for(int j=0; j < m; j++){
           arr[i][j] = 0;
       }
   }
  
   for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            if(s[i][j]== '*'){
                arr[i][j+1]+=1;
                arr[i+1][j]+=1;
                arr[i+1][j+1]+=1;
                arr[i-1][j-1]+=1;
                arr[i][j-1]+=1;
                arr[i-1][j]+=1;
                arr[i-1][j+1]+=1;
                arr[i+1][j-1]+=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j] == '*'){
                cout<<"*";
            }
         else if ( arr[i][j] == 0){
         	cout<<".";
		 }
            else cout<<arr[i][j];
        }
        cout<<endl;
    }



   return 0;
}
