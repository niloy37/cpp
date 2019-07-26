#include<iostream>
#include<algorithm>

using namespace std;
bool binarySearch(int arr[] , int element){
    int left  = 0;
    int right = 4;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid] == element){
            return true;
        }
        else if(arr[mid] < element){
            left = mid+1;
        }
        else {
            right = mid-1;
        }

    }
    return false;
}

void findPairs(int arr[], int size){
            int k = 1;//targeted difference of pair (x-y) = 1
        for(int i=0;i<size;i++){
            if(binarySearch(arr,arr[i]+k) == true){
                cout<<arr[i]+k<<" "<<arr[i]<<endl;
            }
        }

}




int main (int argc, char** argv){

    int arr[] {0,-1,-2,2,1};
    int size =5;
    sort(arr,arr+5);
    findPairs(arr,size);
    return 0;
}
