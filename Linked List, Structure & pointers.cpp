//g++  5.4.0

#include <iostream>
using namespace std;
struct LinkedList {
int value ; 
LinkedList *next;
};

int main()
{
    LinkedList n1,n2,n3,n4,n5;
    
    n1.value = 10;
    n2.value = 20;
    n3.value = 30;
    n4.value = 40;
    n5.value = 50;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    cout<<n1.next->next->next->value<<endl;
    cout<< n1.next->next->value;
}


/*
Output - 
40
30
*/
