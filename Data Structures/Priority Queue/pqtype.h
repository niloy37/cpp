#pragma once
#ifndef PQTYPE_H_INCLUDED
#define PQTYPE_H_INCLUIDED
#include "heaptype.h"
#include "heaptype.cpp"
class FullPQ {};
class EmptyPQ {};
template<class ItemType>
class PQType
{
public :
	PQType(int);
	~PQType();
	void MakeEmpty();
	bool IsEmpty();
	bool IsFull();
	void Enqueue(ItemType);
	void DeQueue(ItemType&);
private :
	int length;
	HeapType<ItemType> items;
	int maxItems;
};
#endif
