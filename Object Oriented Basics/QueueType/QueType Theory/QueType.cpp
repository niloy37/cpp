//constructor and parameter constructor inside header

bool QueType::isEmpty(){
 if(front == rear) return true;
  else return false;
  }
bool QueType::makeEmpty(){
  front = maxQue-1;
  rear = maxQue-1;
}

QueType::~QueType(){
 delete [] items;
 }
void QueType::Enqueue(ItemType item){
 if(isFull) 
  throw fullstack();
  else {
  rear = (rear+1)% maxQue;
  items[rear] = item;
  }
}
void QueType::DeQueue(ItemType& item){
 if(isEmpty())
  throw EmptyStack();
 else {
 front = (front+1) %maxQue;
 item = info[front];
 }
}

