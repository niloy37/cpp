#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxCounter=0;
    int counter=0;
    for(int i=0;i<n-1;i++){
        if(arr[i] >= arr[i+1])
            counter++;
        else counter=0;
        if(maxCounter <= counter)
            maxCounter=counter;
    }
    cout<<maxCounter<<endl;
}
