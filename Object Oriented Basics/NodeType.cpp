//g++  5.4.0

#include <iostream>
using namespace std;
struct NodeType {
     int i;
     NodeType *j;
    };


int main()
{
    NodeType *n = new NodeType;
    n->i = 5;
    n->j = new NodeType;
    n->j->i = 500;
    n->j->j = new NodeType;
    n->j->j->i = 1000;
    n->j->j->j = NULL;
    
    
}

//no output
