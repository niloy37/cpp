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
  
  ItemType Stack::top(){
   if(isEmpty())
     throw EmptyStack();
   else return topPtr->info; 
  }
  
  bool Stack::isEmpty(){
    return (topPtr == NULL);
    }
  
  bool Stack::isFull(){
   try{
     NodeType *location = new NodeType;
     delete location;
     return false;
   }
    catch(std::bad_alloc exception){
     return true; 
    }
  }
  
  
