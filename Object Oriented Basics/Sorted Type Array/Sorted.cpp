#include "Sorted.h"

void SortedType::putItem(ItemType item){
bool moreToSearch;
int location =0;
moreToSearch = (location < length);
while(moreToSearch){
switch(item.comparedTo(info[location]){
case LESS : moreToSearch = false;break; 
case GREATER : location++;
moreToSearch = (location < length );
break;
}
}
for(int index = length ; index >location;index--){
info[index] = info[index-1];
}
info[location] = item;
length++;
}
       
       void SortedType::deleteItem(ItemType item){
        int location =0;
         while(item.comparedTo(info[location]) != EQUAL){
          location++; 
         }
         for(int index= location+1; index<length;index++){
         info[index-1] = info[index];}
       length--;  
         }
       
/*
ifFull() {
ItemType *newInfo = new ItemType[MAX_ITEMS*2]
for(int i=0;i<length;i++){
newInfo[i] = info[i];
}
delete [] info;
info = newInfo;
MAX_ITEMS*=2;
}
*/
