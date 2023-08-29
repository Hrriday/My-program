#include<iostream>
#include<stack>
using namespace std;
bool knows(int a[4][4],int f,int s)
{
    if(a[f][s]==1)
    return true;
    else
    return false;
}
int main()
{
    stack<char> s;
    int f=0;
    int a[4][4]={{0,0,1,0},
                 {0,0,1,0},
                 {0,0,0,0},
                 {0,0,1,0}};
    for(int i=3;i>=0;i--)
    {
        s.push((char)(i+'A'));
    }
    while(1)
    {
        char ch1,ch2;
        ch1=s.top();
        s.pop();
        if(s.empty())
        break;
        ch2=s.top();
        s.pop();
        if(knows(a,(int)ch1-'A',(int)ch2-'A'))
        s.push(ch2);
        else
        s.push(ch1);
        if(s.empty())
        break;
    }
    for(int i=0;i<4;i++)
    {
        int j=s.top()-'A';
        if(a[j][i]==1)
        f=1;
    }
    if(f==0)
    {
        cout<<s.top()<<" is the celebrity";
    }
    else
    cout<<"There is no celebrity";
    return 0;
}