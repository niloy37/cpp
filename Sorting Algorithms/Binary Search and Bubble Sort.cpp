#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int a [] , int key){

int mid;
int first = 0 , last = 5;
bool found = false;
bool moreToSearch = first < last; 
while(moreToSearch && !found){
	mid = (first+last) /2;
	if(key < a[mid] ){
		first  = mid+1;
		moreToSearch = first < last;
	}
	else if(key > a[mid]){
		last = mid-1;
		moreToSearch = first < last;
	}
	else {
		found = true;

	}
}
return found;

}

void bubbleSort(int a []){
	for(int i = 1 ; i < 6 ; i++){
		for(int j = 0 ; j < 6 - i ; j++ ){
			if(a[j] > a [j+1]){
			int temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
		}
	}
}

int main () {
int arr [] {5,2,1,2,53,2};
bubbleSort(arr);
cout<<binarySearch(arr , 2);
}
