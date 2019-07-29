
class QueType {
 ItemType *items;
  int front ;
  int rear;
  int maxQue;
  
  public :
  QueType(){
    maxQue =501;
    front = maxQue-1;
    rear = maxQue-1;
   items = new ItemType[maxQue]; 
  }
  QueType(int max){
    maxQue=max+1;
    front = maxQue-1;
    rear = maxQue-1;
    items = new ItemType[maxQue];
  }
  ~QueType();
  
  
  
  
  
  
}
