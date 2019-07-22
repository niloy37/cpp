#include <iostream>
#include<algorithm>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    int m,n;
    cin>>m;
    int *arr = new int [m];

    for(int i = 0 ; i < m ; i++){
            cin>>arr[i];
    }
    cin>>n;
    int *arr2 = new int [n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    sort(arr, arr+m, greater<>());
    sort(arr2, arr2+n, greater<>());
    int c1=0,c2=0;
    UnsortedType<int>list1;
    while(c1 != m && c2 != n)
    {   //if(c1 <= m){
        if(arr[c1]>arr2[c2]){
               list1.InsertItem(arr[c1]);
               c1++;
        }
        else {
            list1.InsertItem(arr2[c2]);
            c2++;
        }
   // }

    }
        int a;
    for(int i = 0 ; i < (int)list1.LengthIs();i++){
        list1.GetNextItem(a);
        cout<<a<<" ";
    }

    return 0;
}
