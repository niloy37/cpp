#include<iostream>
using namespace std;

int main () 
{
    string s;
    cin>>s;
    char temp; 
 temp = s[0];
 s[0] = s[s.size() - 1];
 s[s.size() -1 ] = temp;
 cout<<s;
}
