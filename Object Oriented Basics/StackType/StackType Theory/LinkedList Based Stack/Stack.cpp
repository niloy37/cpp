#include "Stack.cpp"

Stack::Stack(){
topPtr = NULL;
}

void Stack::push(ItemType item){
if(isFull()){
throw FullStack();
}
else{
NodeType *location = new NodeType;
location->info = item; 
location->next = topPtr;
topPtr = location;
}
}

void Stack::pop() {
NodeType *location ;
  location = topPtr;
  topPtr = topPtr->next;
  delete location;
}
