class SortedType {
ItemType info[MAX_ITEMS];
int length;
int currentPos;

public:
SortedType();
void putItem(ItemType item);
void deleteItem(ItemType item);
void makeEmpty();
bool isFull();
int getLength();
ItemType getItem(ItemType &item, bool &found);
ItemType getNextItem();
void resetList();

};
