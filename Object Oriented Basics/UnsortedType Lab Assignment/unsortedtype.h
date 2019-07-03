#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;
template <class ItemType>
class UnsortedType {
int length;
	ItemType info[MAX_ITEMS];
	int currentPos;

	 public :
	UnsortedType();
	void MakeEmpty();
	bool IsFull();
	int LengthIs();
	void RetrieveItem(ItemType &item , bool &found);
	void InsertItem(ItemType item);
	void DeleteItem(ItemType item);
	void ResetList();
     void GetNextItem(ItemType &item);


};


#endif // UNSORTEDTYPE_H_INCLUDED
