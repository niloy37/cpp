#include<stdio.h>




int main() {

int array[5];
int i;
printf("Enter the value of the arrays\n");
for(i=0;i<5;i++){
    scanf("%d",&array[i]);
}


int res=0;

int r=10000;
for(i=0;i<5;i++)
{
res=res+r*array[i];
r=r/10;
}

printf("%d",res);


}
