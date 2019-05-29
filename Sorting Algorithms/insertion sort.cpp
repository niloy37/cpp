#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[] = {3,142,4,0,20,42,5};
	int n=7;
	for(int i=1;i<n;i++){
		int temp = a[i]; // currently considering value
		int j=i-1; //checking start point
		while((temp<a[j]) && (j>=0)){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
