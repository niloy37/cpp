class UnsortedType{
NodeType *ListData;
int length;
NodeType *currentpos;


public :
UnsortedType();
~UnsortedType();
void putItem(ItemType item);
void DeleteItem(ItemType item);
void makeEmpty();
bool isFull();

}
