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

void UnsortedType::deleteItem(ItemType item) {
 NodeType *location  = listData;
 NodeType *templocation;
 if(item.comparedTo(listData->info)==EQUAL){
  templocation = location;
  listData = listData->next;
 }
 else{
 while(item.comparedTo((location->next)->info ) != EQUAL){
  location = location->next;
 }
  templocation = location->next;
  location->next = (location->next)->next;
  delete templocation;
  length--;
 } 
}
void UnsortedType::makeEmpty(){
NodeType *tempptr;
  while(listData != NULL){
  tempptr = listdata;
   listData = listData->next;
   delete tempptr;
  }
 length = 0;
}


