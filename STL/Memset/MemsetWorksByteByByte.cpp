//memset function


#include<iostream>
#include<cstring>

using namespace std;

int main () {
   int arr[5];
   memset(arr,-1,sizeof(arr));
   for(int a:arr){
    cout<<a<<" ";
   }
   cout<<endl;
    memset(arr,0,sizeof(arr));
   for(int a:arr){
    cout<<a<<" ";
   }
   cout<<endl;
   // memset works byte by byte

   memset(arr,5,sizeof(arr));
   for(int a : arr){
    cout<<a<<" ";
   }

}
