#include<iostream>
using namespace std;
bool isValid(int **arr,int row,int col,int n)
{
    for(int i=row;i<9;i++)
    {
        if(*(*(arr+i)+col)==n)
        return false;
    }
    for(int i=col;i<9;i++)
    {
        if(*(*(arr+row)+i)==n)
        return false;
    }
    int i,j;
    i=row/3*3;
    j=col/3*3;
    for(int m=0;m<3;m++)
    {
        for(int p=0;p<3;p++)
        {
            if (*(*(arr+(m+i))+(p+j))==n)
            return false;
        }
    }
    return true;
}
void sudoku(int **arr, int row, int col)
{
    if(row==9)
    return;
    int ni,nj;
    if(col==8)
    {
        ni=row+1;
        nj=0;
    }
    else
    {
        ni=row;
        nj=col+1;
    }
    if (*(*(arr+row)+col)!=0)
    sudoku(arr,ni,nj);
    else
    {
        for(int i=1;i<=9;i++)
        {
            if(isValid(arr,row,col,i)==true)
            {
                *(*(arr+row)+col)=i;
                sudoku(arr,ni,nj);
                *(*(arr+row)+col)=0;
            }
        }
    }
}
int main()
{
    int i,j;
    int** a=new int*[9];
    cout<<"Enter values for sudoku"<<endl;
    for(i=0;i<9;i++)
    {
        a[i]=new int[9];
        for(j=0;j<9;j++)
        cin>>a[i][j];
    }
    sudoku(a,0,0);
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        cout<<a[i][j]<<"   ";
        cout<<endl;
    }
    return 0;
}
/*5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9*/