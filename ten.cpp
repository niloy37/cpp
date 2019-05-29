#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Enter a number!" << endl;
    int n;
    cin>>n;
    cout<<"You entered : "<<n<<endl;

    if(n>10)
        cout<<n<<" is a greater than 10 ";
    else if(n<0) cout<<n<<" is a less than 10";
    else
     cout<<n<< " is equal to 10";

    return 0;
}
