#include<bits/stdc++.h>
using namespace std;

struct NodeType {
	int value;
	NodeType *next; 
};

int main () {
NodeType  a[10];
for(int i = 0 ; i < 10 ; i++){
	cin>>a[i].value;
	if(i != 9)
	a[i].next = &a[i+1];
}

cout<<a[0].next->next->next->next->value<<endl;

}
