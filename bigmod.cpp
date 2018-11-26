#include<iostream>


using namespace std;


int bigmod(string s,int a){
int res=0;

for(int i=0;i<s.length();i++)
res = (res*10+ ((int)s[i]-'0'))%a;


return res;

}


int main() {
string s ="12312312312312432454982734829142893174621897346129837461982347129837412389746";
cout<<bigmod(s,10);
}
