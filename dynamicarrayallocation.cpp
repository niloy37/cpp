#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int *dp = new int [5]; //dynamic array allocation
	int data[5]; //statical array allocation
	cout<<data<<endl; // printing address of data0 [starting block]
	dp[3]= 1; //setting the dynamic array 3 to 1
	cout<<dp[3]; //printing 
	return 0;
}
