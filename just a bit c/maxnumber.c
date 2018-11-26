#include<stdio.h>



int main () {

int array[5];
int i;
printf("Enter  5 integers\n");
for(i=0;i<5;i++){
    scanf("%d",&array[i]);
}
int max=array[0];

for(i=1;i<5;i++){
    if(array[i]>max)
        max=array[i];
}
printf("%d",max);

}
