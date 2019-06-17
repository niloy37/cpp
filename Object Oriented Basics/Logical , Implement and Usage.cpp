#include <iostream>
using namespace std;
class UnsortedType{
	int length;
	ItemType info[MAX_ITEMS];
	int currentPos;
	 
	 public :
	UnsortedType();
	void MakeEmpty();
	bool IsFull();
	int GetLength();
	ItempType GetItem();
	void putItem(ItemType item);
	void deleteItem(ItemType item);
	void ResetList();
	ItemType GetNextItem();
	
}; // design class , save as UnsortedType.h


//#include "UnsortedType.h"
//Implementation File , save as UnsortedType.cpp
UnsortedType::UnsortedType(){
	//construct object
}
 void UnsortedType::MakeEmpty(){
 	//clear the file
 }



//#include "UnsortedType.h"

int main() {
	// your code goes here
	UnsortedType list1;
	
	return 0;
}
