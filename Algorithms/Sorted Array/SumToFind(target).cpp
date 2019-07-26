#include<iostream>

using namespace std;

void twoSum(int arr[], int target){
   int i = 0;

   int j=4;
   while(i<j){
    if(arr[i]+arr[j] ==  target)
        break;
    else if(arr[i]+arr[j]<target)
        i++;
    else j--;
   }

   cout<<i<<" "<<j;

}

int main(){    
    int arr[] {1,2,3,4,5};

    twoSum(arr,8);
    
    return 0;
}
