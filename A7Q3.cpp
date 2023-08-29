#include<iostream>
using namespace std;
class shape
{
    protected:
    double x,y;
    public:
    void getdata()
    {
        cout<<"Enter the length of sides\n";
        cin>>x>>y;
    }
    virtual void display_area()=0;
};
class rectangle:public shape
{
    public:
    void display_area()
    {
        cout<<"Area of rectangle is: "<<x*y<<endl;
    }
};
class triangle:public shape
{
    public:
    void display_area()
    {
        cout<<"Area of triangle is: "<<x*(y/2)<<endl;
    }
};
int main()
{
    rectangle r1;
    triangle t1;
    r1.getdata();
    r1.display_area();
    t1.getdata();
    t1.display_area();
}