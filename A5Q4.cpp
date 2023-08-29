//Create 2 classes DB and DM which store the value of distances. DM stores distance in meters and centimeters. 
//DB stores in feet and inches. Write a program that can read values for the class objects and add one object of 
//DM with another object of DB. Use a friend function to carry out the addition operation. The object that stores 
//the results may be a DM object or DB object, depending on the units in which the results are required. 
//The display should be in the format of feet and inches or meters and centimeters depending on the object 
//on display.
#include<iostream>
using namespace std;
class DM;
class DB
{
    public:
    float f;
    DB(float f1)//Can make function to directly input number from user instead of creating a constructor
    {
        f=f1;
    }
    friend float operator +(DB &o1,DM &o2);
};
class DM
{
    public:
    float F;
    DM(float f2)
    {F=f2;}
    friend float operator +(DB &o1,DM &o2);
};
float operator +(DB &o1,DM &o2)
{
    int c;float ans;
    cout<<"Enter 1 for metre and 2 for feet "<<endl;
    cin>>c;
    switch(c)
    {
        case 1:
        ans=o2.F+o1.f*0.305;//can make function senddata instead of making variables f and F public
        break;
        case 2:
        ans=o1.f+o2.F*(1/0.305);
        break;
        default:
        cout<<"Wrong Input"<<endl;
    }
    return ans;
}
int main()
{
    DM d1(3.2);
    DB d2(4.5);
    float r=d2+d1;
    cout<<"Ans is: "<<r;
    return 0;
}
