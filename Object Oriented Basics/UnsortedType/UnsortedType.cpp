#include "UnsortedType.h"
#include<iostream>
using namespace std;

template<class ItemType>
UnsortedType<ItemType>::UnsortedType(){
length = 0;
listdata = NULL;
currentPos = NULL;
}
template<class ItemType>
int UnsortedType<ItemType>::LengthIs(){
return length;
}
template<class ItemType>
bool UnsortedType<ItemType>::IsFull(){
NodeType* location;
try {
location = new NodeType;
delete location;
return false;
}
catch (bad_alloc& exception){
return true;
}

}

template<class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item){
NodeType *location;
location = new NodeType;
location->info = item;
location->next = listdata;
listdata = location;
length++;
}

template<class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item){
NodeType *location = listdata;
NodeType* templocation;
if(item==listdata->info){
    templocation = location;
    listdata = listdata->next;
}
else {
    while(!(item==(location->next)->info)){
        location=location->next;
    }
    templocation = location->next;
    location->next = (location->next)->next;
}
delete templocation;
length--;
}

template<class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found){
NodeType *location = listdata;
bool moreToSearch = (location!=NULL);
found = false;
while(moreToSearch && !found){
    if(item == location->info)
        found = true;
    else {
        location = location->next;
        moreToSearch = (location != NULL);
    }
}
}
template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty(){
NodeType* tempPtr;
while(listdata != NULL){
    tempPtr = listdata;
    listdata = listdata->next;
    delete tempPtr;
}
    length = 0;
}

template<class ItemType>
UnsortedType<ItemType>::~UnsortedType(){
MakeEmpty();
}
template<class ItemType>
void UnsortedType<ItemType>::ResetList(){
currentPos = NULL;
}
template<class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType &item){
if(currentPos == NULL)
    currentPos = listdata;
else currentPos = currentPos->next;
item = currentPos->info;
}
