#include<bits/stdc++.h>

using namespace std;
int main () {


int n;

int median=0;

vector<int> x;
while(cin>>n){

    x.push_back(n);
  sort(x.begin(),x.end());

    if(x.size()%2==0) {
      median= (x[(x.size()+1)/2-1]+x[(x.size()+1)/2])/2;

    }
       else median = x[(x.size()+1)/2-1];
cout<<median<<endl;

}


}
