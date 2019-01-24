#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main() {
    int n;
    map<char,double>m;
    map<char,double>:: iterator itr;

    cin>>n;


    while(n--){

            double money=0;
        int t;
        cin>>t;
        while(t--){
            char f;
            double r;


            cin>>f>>r;
            m[f]=r;
        }

        int z;
        cin>>z;
        cin.ignore();

        while(z--){

            string s;

            getline(cin,s);
            for(int i=0;s[i] != '\0';i++){
                itr = m.find(s[i]);
                if(itr != m.end()){
                    money += (m[s[i]]);
                }
            }



        }

        money/=100;
        printf("%.2lf$\n",money);

        m.clear();

    }



}
