#include<stdio.h>
void search(int arr[], int size, int key);

int main () {

    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int i;
    int array[size];
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    int key;
    printf("Enter the element you are looking for\n");
    scanf("%d",&key);
    search(array,size,key);




}
void search(int arr[],int size,int key){
int i;
for(i=0;i<size;i++){
    if(arr[i]==key){
        printf("Found");
        break;

}
if(i==size-1){
    printf("Not Found");
}
}
}
