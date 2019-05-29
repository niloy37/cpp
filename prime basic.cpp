#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Enter a number!" << endl;
    int n;
    cin>>n;
    cout<<"You entered : "<<n<<endl;
bool f = false;
    for(int i=2;i<n;i++){
     if(n%i == 0){
         f = true;
        break;
     }

    }
     (f==false)?cout<<"prime":cout<<"not prime";


    return 0;
}
