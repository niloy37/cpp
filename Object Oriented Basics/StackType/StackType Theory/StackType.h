class StackType{
ItemType items[MAX_ITEMS];
int top;
public :  
StackType();
void push(ItemType item);
void pop();
ItemType Top();
bool isFull();
bool isEmpty();
};
