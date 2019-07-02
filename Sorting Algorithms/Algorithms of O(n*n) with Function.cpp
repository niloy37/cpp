#include<bits/stdc++.h>
#define n 7
using namespace std;

void bubbleSort(int arr []){
	//int n = sizeof(arr)/sizeof(arr[0]);
//Bubble Sorting Complexity O(n*n) Author ~ Havoc , Contribution MMR4 , ECE , NSU
	for(int i=1 ; i < n ; i ++){
		for(int j = 0 ; j < (n-i) ; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

}
void SelectionSort(int arr []){
	// Selection Sort , Complexity O(N*N) Author ~ Havoc , Contribution MMR4 , ECE , NSU
//int n =  sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<n-1;i++){
		int minIndex = i;
		for(int j = i+1 ; j< n ; j++){
			if(arr[j]<arr[minIndex]){
				minIndex = j;
			}

		}
		if(i!= minIndex){
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}

}

void insertionSort(int arr []){
	// Insertion Sort , Complexity O(N*N) Author ~ Havoc , Contribution MMR4 , ECE , NSU
	
for(int i=1;i<n;i++){
	int j = i-1;
	int temp = arr[i];
	while(temp < arr[j] && j>=0){
		arr[j+1] = arr[j];
		j-=1;
	}
	arr[j+1] = temp;
}

}


int main () {
int arr [] { 1,3,2,5,4,7,6};
SelectionSort(arr);
for(int a : arr){
	cout<<a<<" ";
}
cout<<endl<<endl;
int arr2 [] {2,4,3,1,6,5,7};
bubbleSort(arr2);
for(int a: arr2){
	cout<<a<<" ";
} 
cout<<endl<<endl;
int arr3 [] {1,3,4,2,7,6,5};
insertionSort(arr3);
for(int a: arr2){
	cout<<a<<" ";
} 
cout<<endl<<endl;


}
