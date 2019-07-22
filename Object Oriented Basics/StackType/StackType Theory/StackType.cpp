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

