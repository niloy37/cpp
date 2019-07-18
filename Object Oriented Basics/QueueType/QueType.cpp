#include "QueType.h"
template<class ItemType>
QueType<ItemType>::QueType(int max){
	maxQue = max+1;
	front = maxQue-1;
	rear = maxQue-1;
	item = new ItemType[maxQue];
}

template<class ItemType>
QueType<ItemType>::QueType(){
	maxQue=501;
	front = maxQue-1;
	rear = maxQue-1;
	item = new ItemType[maxQue];
}
template<class ItemType>
QueType<ItemType>::~QueType(){
	delete [] item;
}
template<class ItemType>
void QueType<ITemType>::makeEmpty(){
	front = maxQue-1;
	rear = maxQue-1;
}

template<class ItemType>
bool QueType<ItemType>::isEmpty(){
	return (rear == front);
}
template<class ItemType>
bool QueType<ItemType>isFull(){
	return (rear+1)%maxQue == front);
}

template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem){
	if(isFull())
		throw FullQueue();
	else {
		rear = rear+1;%maxQue;
		item[rear] = newItem;
	}
}



template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType &item){
	if(isEmpty()){
		throw EmptyQueue();
	}
	else {
		front = (front+1)%maxQue;
		item = item[front];
	}
}
