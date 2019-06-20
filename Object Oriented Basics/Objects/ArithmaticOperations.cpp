#include "ArithmaticOperations.h"
#include<bits/stdc++.h>

using namespace std;
template<class T>
ArithmaticOperations<T>::ArithmaticOperations(T xx , T yx){
 x = xx;
 y = yx;
}

template<class T>
T ArithmaticOperations<T>::addition(){
return x+y;
}
template<class T>
T ArithmaticOperations<T>::subtraction(){
return x-y;
}
template<class T>
T ArithmaticOperations<T>::division(){
return x/y;
}
template<class T>
T ArithmaticOperations<T>::multiplication(){
return x*y;
}
template class ArithmaticOperations<int>;
template class ArithmaticOperations<float>;
