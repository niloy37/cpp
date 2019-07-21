#include<cstring>
#include<iostream>

using namespace std;
int main () {
    char arr [] = "Programming is not for me!";
    memset(arr+15,'.',3*sizeof(char)); //'a'
    cout<<arr;
}
