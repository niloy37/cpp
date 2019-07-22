#include<iostream>
#include<cstring>
using namespace std;
void print(char *ch){
cout<<ch;
}
int main(int argc , char **argv)
{
    char *ch = new char[10];
    memset(ch,'a',9);
    print(ch);
}
