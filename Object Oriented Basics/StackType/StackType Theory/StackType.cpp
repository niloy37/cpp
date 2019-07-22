#include "StackType.h"


StackType::StackType() {
top=-1;
}

StackType::push(ItemType item){
if(isFull()){
//showmessage and return
}
else
items[++top] = item;
}


void StackType::pop(){
  if(isEmpty()){
   //show message and return 
  }
  
  else 
    top--;
}

ItemType StackType::top(){
  if(isEmpty()) //return and show message
 
    return items[top];
}

bool StackType::isFull(){
  return (top == MAXSIZE-1);
}
bool StackType::isEmpty(){
 return (top == -1); 
}

