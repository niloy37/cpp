#include<iostream>

using namespace std;
 int main () {
  cout<<"Enter a number"<<endl;

  int x;
  cin>>x;
 bool flag = true;
  for(int i=2;i<x/2;i++)
  {
      if(x%2==0){
        flag=false;
        break;
      }
  }
  if(flag==true)
cout<<"Prime"<<endl;
else cout<<"not prime"<<endl;
 }
