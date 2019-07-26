#include<iostream>
#include<algorithm>

using namespace std;

void findMeeting(int arr[3][2], int arr2[2][2], int dur){
int ia=0;
int ib=0;

while(ia <3 && ib< 2){
    int start = max(arr[ia][0], arr2[ib][0]);
    int end = min(arr[ia][1], arr2[ib][1]);
    if(start + dur <= end){
        cout<<start<<" "<<start+dur;
        break;
    }
    else if(arr[ia][1] < arr[ib][1])
        ia++;
    else ib++;
}

}


int main () {
   int arr [3] [2] {
   {10,50},
   {60,120},
   {140,210}
    };
    int arr2 [2] [2] {
        {0,15},
        {60,70}
    }; 
    int dur = 8;
    findMeeting(arr,arr2,dur);
}
