//g++  5.4.0
#include<map>
#include <iostream>
using namespace std;
int main()
{
    map<int,string> q;
    string s ="qwerty";
    int n =5;
    //cin>>s>>n;
    q.insert(make_pair(n,s));
    map<int,string>::iterator it = q.find(n);
    if(it != q.end())
    cout<<"Key : "<<it->first<<" Value : "<<it->second;
}
