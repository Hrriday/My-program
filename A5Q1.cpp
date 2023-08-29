#include<iostream>
using namespace std;
class Float
{
    float f;
    public:
    void getdata(float x)
    {
        f=x;
    }
    friend float operator +(Float &f1,Float &f2);
    friend float operator -(Float &f1,Float &f2);
    friend float operator *(Float &f1,Float &f2);
    friend float operator /(Float &f1,Float &f2);
};
float operator +(Float &f1,Float &f2)
{
    return (f1.f+f2.f);
}
float operator -(Float &f1,Float &f2)
{
    return (f1.f-f2.f);
}
float operator *(Float &f1,Float &f2)
{
    return (f1.f*f2.f);
}
float operator /(Float &f1,Float &f2)
{
    return (f1.f/f2.f);
}
int main()
{
    Float g1,g2;
    g1.getdata(2.5);
    g2.getdata(3.1);
    cout<<g1+g2<<endl<<g1-g2<<endl<<g1*g2<<endl<<g1/g2;
    return 0;
}