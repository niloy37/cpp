#include<bits/stdc++.h>
using namespace std;
int main () {

int a,b;
//int x=a;
//int y=b;
cin>>a>>b;
int counterVladik=0;
int counterValera=0;
int i=1;
while(counterVladik<=a && counterValera<=b){

    if(i%2!=0){
        counterVladik+=i;
    }
    else{
        counterValera+=i;
    }

    if(counterVladik<=a && counterValera<=b){
    }
    else{

            break;
        }
    i++;

}

string s=(counterVladik>a)?"Vladik":"Valera";
cout<<s<<endl;

}
