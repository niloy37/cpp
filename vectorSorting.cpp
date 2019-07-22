//g++  5.4.0
#include<cstring>
#include<algorithm>
#include <iostream>
#include<vector>
#define all(a) a.begin() ,a.end()

using namespace std;
int main()
{
    vector<int> q;
    
    q.push_back(5);
    q.push_back(1);
    q.push_back(3);
    sort(all(a));
    for(int a : q)
        cout<<a<<" ";
        return 0;
    
}
