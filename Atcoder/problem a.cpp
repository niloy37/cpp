#include<iostream>
using namespace std;

int main (int argc , char** argv)
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    int correct=0;
    for(int i=0 ; i < 3; i++){
        if(s[i] == t[i])
            correct++;
    }

    cout<<correct<<endl;
    return 0;
}
