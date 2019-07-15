#include<iostream>

using namespace std;

int main ()
{
    cout<<"Enter a number : "<<endl;
    int x;
    cin>>x;
    int y=x;
    int rem;
    int sum=0;
    while (x!=0){
        rem=x%10;
        x=x/10;
        sum=sum+rem;




    }
    cout<<"The Sum of the digits "<<y<<" is = "<<sum<<endl;




}
