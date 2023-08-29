#include<iostream>
using namespace std;
class person
{
    protected:
    string name,code;
};
class account:public virtual person
{
    protected:
    int pay;
};
class admin: public virtual person
{
    protected:
    int experience;
};
class master:private account,admin
{
    public:
    void setdata()
    {
        cout<<"Enter name and code\n";
        cin>>name>>code;
        cout<<"Enter the pay\n";
        cin>>pay;
        cout<<"Enter the experience in months\n";
        cin>>experience;
    }
    void printdata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Pay: "<<pay<<endl;
        cout<<"Experience: "<<experience<<endl;
    }
    void update()
    {
        cout<<"Enter new pay\n";
        cin>>pay;
        cout<<"Enter updated experience in months\n";
        cin>>experience;
    }
};
int main()
{
    master m1;
    m1.setdata();
    m1.printdata();
    m1.update();
    m1.printdata();
    return 0;
}