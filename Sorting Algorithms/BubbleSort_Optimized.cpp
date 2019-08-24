// OptimalizedBubbleSort.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;

void bubbleSortOpt(int input[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // i represents how many elements have bubbled to correct place
        bool swapped = false;
        for (int j = 0; j + 1 < n - i; j++) {
            if (input[j] > input[j + 1]) {
                //swap
                swapped = true;
                int temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
        }
        if (!swapped) {
            return;
        }
    }
}

int main()
{
    int arr[] {1,53,23,12,3,5,7};
    int n = sizeof(arr)/sizeof(int);
    bubbleSortOpt(arr,n);
    for(int it : arr)
        cout<<it<<" ";
    return 0;
}

