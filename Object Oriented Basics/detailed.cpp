//g++  5.4.0

#include <iostream>
using namespace std;

template<class T>
class calculator {
T num1,num2;
    public :
    T add(T n1,T n2);
};

template <class T>
T calculator<T>::add(T n1, T n2){
    return n1+n2;   
    }

int main()
{
    calculator<float>c1;
    cout<<c1.add(4.2,2.1);
    //cout << "Hello, world!\n";
}
