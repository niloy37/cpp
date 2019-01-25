#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main () {
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
sort(a,a+n);
for(int i=0;i<n;i++){
    printf("%d\n",a[i]);
}



}
