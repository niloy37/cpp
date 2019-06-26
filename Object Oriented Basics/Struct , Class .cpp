//g++  5.4.0

#include <iostream>
using namespace std;
class ItemType{
  int value;  
    public : 
     void Initialize(int n){
        value = n;
    }
    void print()
    {
        cout<<value;
    }
    
};

struct NodeType{
    ItemType info;
    NodeType *next;
};

int main()
{
     NodeType n1,n2,n3;
     ItemType i1,i2,i3;
    i1.Initialize(10); i2.Initialize(20); i2.Initialize(30);
    n1.info = i1; n2.info = i2; n3.info = i3;
    n1.next = &n2; n2.next = &n3;
    n1.next->info.print();
    cout<<endl;
    n1.next->next->info.print();
}
