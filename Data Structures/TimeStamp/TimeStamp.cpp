#include "TimeStamp.h"

TimeStamp::TimeStamp(int x, int y, int z){
    second = x;
    minute = y;
    hour=z;

}
std::String TimeStamp::getValues(){
return x+" "+y" "+z;
}
bool TimeStamp::compareTo(int x,int y,int z){
bool f = false;
if(x == second && y==minute && z==hour)
    f=true;
return f;
}
