#include<bits/stdc++.h>
using namespace std;
class FractionType{
public:
    FractionType(){
    num=0;
    denom=0;
    }
    void Initialize(int numerator,int denominator){


    num = numerator;
    denom = denominator;

    }
   int NumeratorIs(){
   return num;
   }
   int DenominatorIs(){
   return denom;
   }
   bool IsZero(){
       if(num==0)return true;
       else
        return false;
   }
   bool IsNotProper(){
   if(num>denom)
    return true;
   else return false;
   }
   int ConvertToProper(){

       int a = num/denom;
       int b = num%denom;
       num = b;
       return a;
   }


private:
    int num;
    int denom;

};
int main () {
FractionType f;
f.Initialize(47,5);
cout<<f.NumeratorIs()<<endl;
cout<<f.DenominatorIs()<<endl;
cout<<"Is zero: " <<f.IsZero()<<endl;
cout<<"is not proper : " <<f.IsNotProper()<<endl;
cout<<"convert to proper : "<< f.ConvertToProper();
}
