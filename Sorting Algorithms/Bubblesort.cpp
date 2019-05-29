#include <iostream>
using namespace std;

void Bubblesort(int  a []){
	int n=7;
	for(int i=1;i<n;i++){
		for(int j=0;j<(n-i);j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]= a[j+1];
				a[j+1]=temp;
			}
		}
	}
}


int main() {
	// your code goes here
	int a[]= {0,19,2,4556,12,2345,21};
	int n=7;
	Bubblesort(a);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
