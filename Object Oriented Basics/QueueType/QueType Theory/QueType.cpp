//constructor and parameter constructor inside header

bool QueType::isEmpty(){
 if(front == rear) return true;
  else return false;
  }
bool QueType::makeEmpty(){
  front = maxQue-1;
  rear = maxQue-1;
}
