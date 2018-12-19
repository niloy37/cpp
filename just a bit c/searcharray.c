#include <stdio.h>
void search(int arr[],int size,int key);
int main()
{
    int n,i,key;
    printf("enter the length of the array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("search key:");
    scanf("%d",&key);
    search(arr,n,key);
}
void search(int arr[],int size,int key)
{ int i;
int found=0;
    for(i=0; i<size; i++)
    {
        if(key==arr[i])
		found =1;    
}
(found == 1)?printf("Found"):printf("Not Found");
	
}
