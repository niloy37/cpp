/*  Syeda Tamanna Ahsan
      I miss you <3
      */

#include<bits/stdc++.h>
using namespace std;
int main (){
string s;
cin>>s;
int up=0,low=0;
char c;
for(int i=0; i<s.size();i++){
    c=s[i];
    if(isupper(c)== true){
        up++;
    }
    else low++;
}
if(up>low){
        for(int i=0;i<s.size();i++){
    c=s[i];

    putchar(toupper(c));
        }

}
else{
    for(int i=0;i<s.size();i++){
    c=s[i];

    putchar(tolower(c));
        }
}
}
