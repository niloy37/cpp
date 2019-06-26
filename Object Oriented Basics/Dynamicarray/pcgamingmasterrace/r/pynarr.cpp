#include "pynarr.h"
using namespace std;
 pynarr::pynarr(){
 data = NULL;
 size = 0;
 }
 pynarr::pynarr(int s){
 data = new int [s];
 size = s;
 }
 pynarr::~pynarr(){
     delete [] data;
 }
 int pynarr::getValue(int index){
 return data[index];
 }
 void pynarr::setValue(int index,int value){
     data[index] = value;
 }
