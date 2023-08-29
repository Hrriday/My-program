#include<iostream>
using namespace std;
int setbit(int n,int a)
{
    return n|(1<<a);
}
int getbit(int n,int a)
{
    return((n&(1<<a))!=0);
}
int main()
{
    cout<<setbit(4,0)<<endl;
    cout<<getbit(6,1);
    return 0;
}