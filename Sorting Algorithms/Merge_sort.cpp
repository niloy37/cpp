#include<iostream>
#include<climits>
using namespace std;




void merge(int input[] , int from , int middle, int to){
    int lengthleft = middle-from+1;
    int lengthright = to-middle;
    int *left = new int[lengthleft+1];
    int *right = new int [lengthright+1];

    for(int i=0;i<lengthleft;i++){
        left[i]= input[from+i];
    }
    for(int i=0;i<lengthright;i++){
        right[i] = input[middle+i+1];
    }
    left[lengthleft] = INT_MAX;
    right[lengthright] = INT_MAX;

    int leftpointer=0;
    int rightpointer=0;
    for(int i=from;i<=to;i++){
        if(left[leftpointer]> right[rightpointer]){
            input[i] = right[rightpointer];
            rightpointer++;
        }
        else {
            input[i] = left[leftpointer];
            leftpointer++;
        }
    }    
}

void mergeSort(int input[], int from, int to){
    if(from < to){
        int middle = (from+to)/2;
        mergeSort(input,from,middle);
        mergeSort(input,middle+1,to);
        merge(input,from,middle,to);
    }
}


int main () {

    int arr[] {123,213,4213,412,12,32,123,2,1};
    mergeSort(arr,0,9);
    for(int i : arr){
        cout<<i<<" ";
    }


    return 0;
}
