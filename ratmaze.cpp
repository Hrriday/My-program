#include<iostream>
using namespace std;
bool isSafe(int row,int col,int **arr)
{
    if(arr[row][col]==1)
    return true;
    else
    return false;
}
bool maze(int **arr,int row,int col)
{
    if(isSafe(row,col,arr)==true)
    {
        arr[row,col]==*;
        if(maze(arr,row,col+1)==true)
        return true;
        
    }
}