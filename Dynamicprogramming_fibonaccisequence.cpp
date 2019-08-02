//dynamic programming fibonacci
//O(n) , recursive O(2^n)

#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int fibonacci1=0;
    int fibonacci2=1;
    int fibo;
    if( n == 1 ){
        cout<<fibonacci1;
    }
    else if (n==2) cout<<fibonacci2;
    else {
        n-=2;
    while(n--)
    {
        fibo = fibonacci1+fibonacci2;
        fibonacci1=fibonacci2;
        fibonacci2=fibo;
    }
    cout<<fibo;
}

}
