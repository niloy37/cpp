
#include<bits/stdc++.h>
using namespace std;
template<class T>
class Calculator{
private :
    T num1;
    T num2;
public :
    Calculator(T n1 , T n2);
    T add();
    T multiply();
    void display ();
};

template<class T>
Calculator<T>::Calculator(T n1 , T n2){
num1 = n1;
num2 =n2;
}
template<class T>
T Calculator<T>::add(){
return num1+num2;
}
template<class T>
T Calculator<T>::multiply(){
return num1*num2;
}
template<class T>
void Calculator<T>::display(){
cout<<"Numbers : "<<num1<<" and "<<num2<<endl;
cout<<"add : "<<add();
cout<<"\n multiply : "<<multiply()<<endl;
}
int main () {
Calculator<int>a(6,7);
Calculator<float> b(3.2,6.1);
a.display();
b.display();
}
