#include<bits/stdc++.h>
using namespace std;


struct NodeType {
ItemType info;
NodeType *next;
};

int main () {
NodeType a;
NodeType *n;
n = &a; // static allocation
NodeType *n2;
  n2 = new NodeType; //dynamic allocation
  
  n->i = 5;
  n->j = new int;
  *(n->j) = 5;
  /*
  NodeType *j ;
  n->i->j = 100;
  
  new ob j
  
  n->j->j = new NodeType
  
  */
  
  UnsortedType list1;
  ItemType i1 ,i2,i3;
  list1.putItem(i1);
  list1.putItem(i2);
  list1.putItem(i3);
  list1.deleteItem(i3);
  list1.makeEmpty();
  

}
