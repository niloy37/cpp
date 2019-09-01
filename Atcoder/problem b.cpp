#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    if(b == 1) cout<<"0"<<endl;
    else if(a>=b) cout<<"1"<<endl;
    else {
        int socket=0;
        int c=0;
        while(socket <= b){
            socket+=a;
            c++;
            if(socket >= b)
                break;
            socket--;
        }
        cout<<c<<endl;
    }
}
