#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
const int MAX_ITEMS = 5;

class FullStack{}; //exception class thrown by push when stack is full

class EmptyStack{}; //exception class thrown by pop when stack is empty


template<class ItemType>
class StackType{
public :
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
private :
    int top;
    ItemType items[MAX_ITEMS];

};
#endif // STACKTYPE_H_INCLUDED
