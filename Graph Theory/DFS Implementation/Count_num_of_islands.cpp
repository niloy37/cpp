#include<iostream>
void DFS(int arr[5][5], int x,int y){
    int r=5,c=5;
    if(x<0 || x>=r || y<0||y>=c||arr[x][y]!= 1) return;

    arr[x][y] = -1;
    DFS(arr,x-1,y);
    DFS(arr,x+1,y);
    DFS(arr,x,y-1);
    DFS(arr,x,y+1);
}
//DFS IMPLEMENTATION


int countIslands(int arr[5][5]){
    if(arr == NULL) return 0;
    int islands = 0;
    int row = 5;
    int column =5;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j] == 1){
                DFS(arr,i,j);
                islands++;
            }
        }
    }
    return islands;
}




int main (int argc , char** argv){
    int arr[5][5] = {
        {0,1,0,1,0},
        {0,0,1,1,0},
        {1,0,0,1,0},
        {0,1,1,0,0},
        {1,0,1,0,1}
    };
    std::cout<<countIslands(arr);

    return 0;
}
