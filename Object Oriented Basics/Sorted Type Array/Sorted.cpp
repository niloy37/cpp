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

