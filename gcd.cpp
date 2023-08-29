#include<iostream>
#include<math.h>
using namespace std;
int gcddigit(int a,int b)
{
    int c,g,f=0;
    if(a>b)
    c=b;
    else if(a<b)
    c=a;
    else
    {
        g=a;
        f=1;
    }
    if(f==0)
    {
        for(int i=1;i<=c;i++)
        if((a%i==0)&&(b%i==0))
        g=i;
    }
    f=0;
    while(g>0)
    {
        f++;
        g/=10;
    }
    return f;
}
int main()
{
    //3 inputs first 2 no of digits in each no. nd 3rd the no of digits in the gcd of the two numbers
    int a,b,c,i,j,gcd;
    cout<<"Enter 3 numbers for the no of digits of two numbers and gcd respectively"<<endl;
    cin>>a>>b>>c;
    for(i=pow(10,a);i<pow(10,a+1);i++)
    {
        for
    }
}