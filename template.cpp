#include <iostream>
using namespace std;
const int size=3;
template <class T>
class Vector
{
    T *v;
    public:
    Vector()
    {
        cout<<"1\n";
        v=new T[size];
        for(int i=0;i<size;i++)
        v[i]=0;
    }
    Vector(T *a)
    {
        cout<<"2\n";
        for(int i=0;i<size;i++)
        {v[i]=a[i];
        cout<<i<<endl;}
    }
    T operator*(Vector &y)
    {
        cout<<"3\n";
        T sum=0;
        for(int i=0;i<size;i++)
        {sum=sum+this->v[i]*y.v[i];}
        return sum;
    }
};
int main()
{
    int x[3]={1,2,3};
    int y[3]={4,5,6};
    Vector <int>v1;
    Vector <int>v2;
    v1=x;
    v2=y;
    int r=v1*v2;
    cout<<"\n R= "<<r;
    return 0;
}