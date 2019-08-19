#include<iostream>
#include<cmath>


using namespace std;

int fact(int n){
	if(n <=1 ) return 1;
	else return n*fact(n-1);
}

int fibonacci(int n){
	if(n == 0){
		return 0;
	}

	else if(n == 1){
		return 1;
	}
	else {
		return fibonacci(n-1)+ fibonacci(n-2);
	}
}

int sumOfDigits(int n){
	if(n<=1) return 1;
	else return n+sumOfDigits(n-1);
}

int findMin(int a[], int n) 
{  
    if (n == 1) 
        return a[0]; 
    else return min(a[n-1], findMin(a, n-1)); 
}

int decToBin(int n){
	if( n == 0) return 0;
	else return(n % 2 + 10 * decToBin(n/2));
}
float recursiveSum(int n){
	
	if(n == 1)
		return 1;

	else 
		return 1/pow(2,n-1)+ recursiveSum(n-1);
	
} 



int main () {
	int n;
	cout<<"Enter N : "<<endl;
	cin>>n;

	//recursive function calling


	cout<<"The Factorial of N: "<<fact(n)<<endl<<"The N th Fibonacci Number: "<<fibonacci(n)<<endl<<"The Sum of Digits upto N: "<<sumOfDigits(n);
	int a [] {1,22,343,2331,2,0};
	int size = sizeof(a)/sizeof(int);
	cout<<endl<<"Minimum in the Array: "<<findMin(a,size)<<endl;
	cout<<"Binary of N: "<<decToBin(n)<<endl<<"Recursive Sum of the Sequence upto N: "<<recursiveSum(n);

	return 0;
}
