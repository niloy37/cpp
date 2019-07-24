const int MAX_SIZE = 10;

class Queue {
  private :
  ItemType items[MAX_SIZE];
  int front;
  int rear;
  public:
  Queue();
  Enqueue(ItemType item);
  ItemType Dequeue();
  
};
