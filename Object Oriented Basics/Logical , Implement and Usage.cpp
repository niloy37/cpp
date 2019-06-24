#include <iostream>
using namespace std;

//Itemtype must be included
//#include "ItemType.h"
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
	 length = 0;
 }
void UnsortedType::putItem(ItemType item){
info[length++] = item;
}
void UnsortedType::deleteItem(ItemType item){
	int location = 0;
	while((item.comparedTo(info[location])) != EQUAL){
		location++;
	}
	info[location] = info[length-1];
	length--;
}
 bool UnsortedType::isFull(){
if(length == MAX_ITEMS)
	return true;
	 else 
		 return false;
 }
int UnsortedType::GetLength() {
	return length;
}
void UnsortedType::ResetList(){
		
}
ItemType GetItem (ItemType item , bool &found){
bool moreToSearch;
int location = 0;
found = false;
	moreToSearch = (location < length );
	while(moreToSearch && !found){
	switch(item.comparedTo ( info [location])){
		case LESS :
		case GREATER : location++;moreToSearch = (location < length); break;
		case EQUAL : found = true;
			item = info[location];
			break;
	}
	}
	return item;
}

ItemType UnsortedType::GetNextItem(){
	
}







//design class ItemType.h
class ItemType{
int value;
	public: 
	Initialize (int val);
	print();
	int compareTo(ItemType item);
};
//implementation of ItemType.cpp
//#include "ItemType.h"
ItemType::Initialize(int val){
    value = val;
}
//rest goes on


//#include "UnsortedType.h"
//#include "ItemType.h"
int main() {
	// your code goes here
	UnsortedType list1;
	
	return 0;
}
