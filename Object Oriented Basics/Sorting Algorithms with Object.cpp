#include<bits/stdc++.h>
#define NL '\n'
#define pf cout
#define sf cin
using namespace std;
 class ItemType{
 public :
     int id;
     float result;
     string name;
     int cellphone;
     };
     class Sort{
     ItemType arr[50];
     int n;
 public :
    void userInput();
    void fixedInput();
    void bubble();
    void insertion();
    void selection();
    void display();
    };

    void Sort::userInput(){
    cout<<"Enter size of elements:"<<endl;
    cin>>n;
    cout<<"Enter " <<n<< " values"<<NL;
    for(int b = 0 ; b<=n -1; b++){
        cin>>arr[b].id;
        pf << "Value ["<< b <<"] (result) : ";
        cin>>arr[b].result;
        pf<<" Enter name and cellphone number : ";
        sf << arr[b].name << arr[b].cellphone;

        }
    pf<< "Elements of your unsorted list : [ ";
    for(int c = 0 ; c<= n-1 ; c++){
        pf<<"("<<arr[c].cellphone<<","<<arr[c].id<<","<<arr[c].result<<","<<arr[c].name<<") ";

    }

    pf <<"]" <<endl;
    }

    void Sort::fixedInput(){
    n=4;
    arr[0].id =1; arr[0].result = 5.5; arr[0].cellphone = 12345; arr[0].name = "A";
    arr[1].id =2; arr[1].result = 2.1; arr[1].cellphone = 12346; arr[1].name = "B";
    arr[2].id =3; arr[2].result = 3.7; arr[2].cellphone = 12347; arr[2].name = "C";
    arr[3].id =4; arr[3].result = 4.2; arr[3].cellphone = 12348; arr[3].name = "D";
    }

    void Sort::bubble(){
    for(int i=1;i<n;++i){
        for(int j=0;j<(n-i);++j){
            if(arr[j].cellphone>arr[j+1].cellphone){
                ItemType temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    }

      int indexMin = i;
    for(int j=i+1; j<n;j++){
        if(arr[j].cellphone < arr[indexMin].cellphone){
            indexMin = j;
        }
    }
    if(indexMin != i ){
        ItemType temp = arr[indexMin];
        arr[indexMin] = arr[i];
        arr[i]=temp;
    }
}

}  void Sort::insertion(){
    for(int i=1;i<n;i++){
        ItemType temp = arr[i];
        int j=i-1;
        while((temp.cellphone<arr[j].cellphone)&& (j>=0)){
              arr[j+1];
              j=j-1;
              }
              arr[j+1]=temp;
    }
    }
void Sort::selection(){
for(int i=0;i<n-1;i++){


void Sort::display() {
pf <<"Elements of your sorted list : [";
for(int c=0;c<n;c++){
    pf <<"("<<arr[c].cellphone<<","<<arr[c].id<<","<<arr[c].result<<","<<arr[c].name<<")";
}
pf << "]";
}

int main () {
Sort mSort;
mSort.fixedInput();
//mSort.bubble();
//mSort.insertion();
mSort.selection();
mSort.display();
return 0;

}
