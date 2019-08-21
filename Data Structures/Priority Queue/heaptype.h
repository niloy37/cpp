#pragma once
#ifndef HEAPTYPE_H_INCLUDED
#define HEAPTYPE_H_INCLUDED
template<class ItemType>
struct HeapType
{
	void ReheapDown(int root, int bottom);
	void ReheapUp(int root, int bottom);
	ItemType* elements;
	int numElements;
};
#endif // HEAP_H_INCLUDED

