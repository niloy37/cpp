#include "Stack.cpp"
class FullStack{
};
class EmptyStack{
  
};
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
  
  if(isEmpty()){
    throw EmptyStack();
  }
  else{
NodeType *location ;
  location = topPtr;
  topPtr = topPtr->next;
  delete location;
  }
