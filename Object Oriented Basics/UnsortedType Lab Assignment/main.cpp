#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    //task
    //create list of integers
    UnsortedType<int>list;
    //insert 4 items
    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(6);
    list.InsertItem(9);
    //print the list
    for(int i = 0 ; i < 4 ; i++){
        int x ;
        list.GetNextItem(x);
        cout<<"Item No : "<<i+1<<" is "<<x<<endl;

    }
    //print the length of the list
    cout<<"Length of the list : "<<list.LengthIs()<<endl;

    //retrieve items

    bool f = false;
    int x = 4;
    list.RetrieveItem(x,f);
    cout<<"4 is found - " <<f<<endl;
    f=false;
    x=5;
    list.RetrieveItem(x,f);
    cout<<"5 is found - " <<f<<endl;
    f=false;
    x=9;
    list.RetrieveItem(x,f);
    cout<<"9 is found - " <<f<<endl;
    f=false;

    list.RetrieveItem(x,f);
    cout<<"10 is found - " <<f<<endl<<endl;

    cout<<"List full : "<<list.IsFull()<<endl;

    list.DeleteItem(5);

    cout<<"List full : "<<list.IsFull()<<endl;

    list.DeleteItem(1);


  list.ResetList();


    for(int i = 0 ; i < 4 ; i++){
        int x ;
        list.GetNextItem(x);
        cout<<"Item No : "<<i+1<<" is "<<x<<endl;

    }


    return 0;
}
