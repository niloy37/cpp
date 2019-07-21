#include<cstring>
#include<iostream>

using namespace std;
void function( size_t work){
cout<<work;
}

int main () {
    function(sizeof(int)); //sizeof function returns size_t value
}

