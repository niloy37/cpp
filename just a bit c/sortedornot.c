#include <stdio.h>



int main() {

int array [5];


printf("Enter the elements of the array");
int i;
for(i=0;i<5;i++){

scanf("%d",&array[i]);
}

int answer=0;
for(i=0;i<4;i++){
    if(array[i]>array[i+1]){

    if(i==3)
        answer=1;
    }
        else break;
}
//descending order omit if not needed
for(i=0;i<4;i++){
    if(array[i]<array[i+1]){
        if(i==3)
        answer = 2;
    }
        else break;
    }

    switch(answer){
    case 1 : printf("Desending  order");break;
    case 2 : printf("Ascending order");break; // omit this part too if not needed descending order
    default : printf("Not Sorted");

    }
}



