//include
#include "UnsortedType.h"
#include<bits/stdc++.h>
using namespace std;

UnsortedType::UnsortedType() {
length = 0;
listData = NULL;
}
UnsotedType:: ~UnsortedType();
void UnsortedType::putItem(ItemType item){
 NodeType *location = new NodeType;
 location->info = item;
 location->next = listData;
 listData = location;
 length++;
}