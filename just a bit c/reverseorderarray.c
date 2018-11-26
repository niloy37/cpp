#include<stdio.h>



int main () {

int array[5];
int i;
printf("Enter  5 integers\n");
for(i=0;i<5;i++){
    scanf("%d",&array[i]);
}
for(i=4;i>=0;i--){
    printf("%d",array[i]);

}


}
