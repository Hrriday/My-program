// Define a class String. use overloaded == operator to compare two strings
#include<iostream>
using namespace std;
class String
{
    string s1;
    public:
    String()
    {
        s1="No_data";
    }
    String(string s)
    {
        s1=s;
    }
    friend bool operator ==(String S1,String S2);
};
bool operator ==(String S1,String S2)
{
    if(S1.s1==S2.s1)
    return true;
    else
    return false;
}
int main()
{
    String a1("Football");
    String a2("Football");
    if(a1==a2)
    cout<<"Equal strings";
    else
    cout<<"Not equal";
    return 0;
}