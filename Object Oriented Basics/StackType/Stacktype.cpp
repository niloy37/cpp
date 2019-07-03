#include "StackType.h"
template<class ItemType>
StackType<ItemType>::StackType(){
top = -1;
}
template<class ItemType>
bool StackType<ItemType>::isEmpty(){
return (top == -1);
}
template<class ItemType>
bool StackType<ItemType>::isFull(){
return top == MAX_ITEMS-1;
}
template<class ItemType>
void StackType<ItemType>::Push(ItemType newItem){
if(isFull()) throw FullStack();
items[++top] = newItem;
}
template<class ItemType>
void StackType<ItemType>::Pop(){
if(IsEmpty()) throw EmptyStack();
top--;

}
template<class ItemType>
ItemType StackType<ItemType>::Top(){
if(IsEmpty()) throw EmptyStack();
return items[top];
}
