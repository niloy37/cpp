#include<bits/stdc++.h>
#include<iomanip>


using namespace std;
int main () {
int n;
cin>>n;
int i=1;
double area;

while(n-->0){
    double r;
    cin>>r;
     double areaSquare = 4*r*r;
     areaSquare = areaSquare+pow(10,-9);
    double areaCircle = (2*acos(0.0))*r*r;
     areaCircle+=pow(10,-9);
    double area = areaSquare-areaCircle;
   area=area+pow(10,-9);


    cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<area<<endl;
    i++;
}



}
