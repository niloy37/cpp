#include <iostream>
#include "StackType.h"
#include "StackType.cpp"
void print(StackType<int>&list, int size){
    int arr[size];
    for(int i=0;i<size;i++){
        arr[i] = list.Top();
        list.Pop();
    }
    for(int i = size-1 ; i>=0; i-- ){
        std::cout<<arr[i]<<" ";
        list.Push(arr[i]);
    }
    std::cout<<"\n";
}
int main() {
    StackType<int>list1;

    if(list1.IsEmpty())std::cout<<"List is Empty\n";
    else std::cout<<"List is Not Empty\n";
    int x =5;
    list1.Push(x);
    x=7;
    list1.Push(x);
    x=4;
    list1.Push(x);
    x=2;
    list1.Push(x);
    int size=4;
    if(list1.IsEmpty())std::cout<<"List is Empty\n";
    else std::cout<<"List is Not Empty\n";
    if(list1.IsFull())std::cout<<"List is Full\n";
    else std::cout<<"List is Not Full\n";
   print(list1,size);
    list1.Push(3);
    size++;
    print(list1,size);
    if(list1.IsFull())std::cout<<"List is Full\n";
    else std::cout<<"List is Not Full\n";
    list1.Pop();
    list1.Pop();
    std::cout<<list1.Top()<<std::endl;

    //part 2
    std::string a;
    std::cin>>a;
    std::cout<<a<<std::endl;
    StackType<char>charStack;
    for(int i=0; i<a.size(); i++){
        if(charStack.IsEmpty())
            charStack.Push(a[i]);
        else if(charStack.Top()=='(' && a[i]==')')
            charStack.Pop();
        else if(charStack.Top()=='(' && a[i]=='(')
            charStack.Push(a[i]);

        else if(charStack.Top()==')' && a[i]=='(')
            charStack.Pop();
        else if(charStack.Top()==')' && a[i]==')')
            charStack.Push(a[i]);

    }
    if(charStack.IsEmpty()){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"NotBalanced"<<endl;
    }


    return 0;
}