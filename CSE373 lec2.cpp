#include<iostream>
using namespace std;


    
    int gcd(int a, int b){
        if(a == 0)
        return b;

        return gcd(b % a, a);
    }
    
   




// Large number divided by 11

/*
sum at odd places 
sum at even places
difference of two sums
difference % 11 == 0
*/


bool checker(string s){
    int n = s.length();
    int sum1=0, sum2=0;
    for( int i=0 ; i < n; i++){
            if(i%2 == 0){
                sum1+= s[i]- '0';
            }
            else sum2+= s[i]- '0';
    }
    int dif = sum1 - sum2;
    if( dif % 11 == 0){
        return true;
    }
    return false;
}

//bigmod
int bigmod(string s,int a){
int res=0;

for(int i=0;i<s.length();i++)
res = (res*10+ ((int)s[i]-'0'))%a;


return res;

}

/*

arithmetic series --> a + (n-1)d1
--> (n/2)[2a + (n-1)d]

Geometric Series -->
ar^(n-1)

--> a(1 - r^n)/ (1-r)
*/

//changed


//insertion sorting algo

void insertionSort(int arr[], int n){
    int key;
    for(int j = 1; j < n; j++){
        key =arr[j];
        int i = j-1;
        while(i > 0 && arr[i] > key){ //= jodi add kora hoi then unstable sort hoye jabe, normally insertion sort is stable
            arr[i+1] = arr[i];
            i-=1;
        }
        arr[i+1] = key;
    }
}


int main() {
//string s ="12312312312312432454982734829142893174621897346129837461982347129837412389746";
//cout<<bigmod(s,10);

int arr[] = {1,9,5,3};
int n =4;
insertionSort(arr,n);
for(int a : arr){
    cout<<a<<" ";
}
}
