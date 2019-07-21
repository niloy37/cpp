//memset function


#include<iostream>
#include<cstring>

using namespace std;

int main () {
    char s [] = "111Tentacion";
    memset(s,'X',3);
   // memset(s,'X',11);
    cout<<s;
}
