#include<iostream>
using namespace std;
class staff
{
    protected:
    string code,name;
    void setdata()
    {
        cout<<"Enter code and name\n";
        cin>>code>>name;
    }
    void printdata()
    {
        cout<<code<<"\n"<<name<<endl;
    }
};
class teacher:private staff
{
    int publications;
    string subject;
    public:
    void setdata()
    {
        cout<<"Enter code and name of the teacher\n";
        cin>>code>>name;
        cout<<"Enter no. of publications and subject taught by the teacher\n";
        cin>>publications>>subject;
    }
    void printdata()
    {
        cout<<"Name of teacher: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"No. of publications: "<<publications<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};
class officer:private staff
{
    string grade;
    public:
    void setdata()
    {
        cout<<"Enter code and name of the officer\n";
        cin>>code>>name;
        cout<<"Enter the grade of the officer\n";
        cin>>grade;
    }
    void printdata()
    {
        cout<<"Name of officer: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};
class typist:public staff
{
    protected:
    int speed;
};
class regular:private typist
{
    public:
    void setdata()
    {
        cout<<"Enter code and name of the regular typist\n";
        cin>>code>>name;
        cout<<"Enter typing speed\n";
        cin>>speed;
    }
    void printdata()
    {
        cout<<"Name of regular typist: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Typing speed: "<<speed<<endl;
    }
};
class casual:private typist
{
    int wages;
    public:
    void setdata()
    {
        cout<<"Enter code and name of the casual typist\n";
        cin>>code>>name;
        cout<<"Enter typing speed\n";
        cin>>speed;
        cout<<"Enter daily wages\n";
        cin>>wages;
    }
    void printdata()
    {
        cout<<"Name of casual typist: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Typing speed: "<<speed<<endl;
        cout<<"Daily wages: "<<wages<<endl;
    }
};
int main()
{
    int nt,no,nrt,nct,i;
    cout<<"Enter no. of teachers,officers,regular typists and casual typists\n";
    cin>>nt>>no>>nrt>>nct;
    teacher t[nt];
    officer o[no];
    regular rt[nrt];
    casual ct[nct];
    for(i=0;i<nt;i++)
    {
        t[i].setdata();
    }
    for(i=0;i<no;i++)
    {
        o[i].setdata();
    }
    for(i=0;i<nrt;i++)
    {
        rt[i].setdata();
    }
    for(i=0;i<nct;i++)
    {
        ct[i].setdata();
    }
    for(i=0;i<nt;i++)
    {
        t[i].printdata();
    }
    for(i=0;i<no;i++)
    {
        o[i].printdata();
    }
    for(i=0;i<nrt;i++)
    {
        rt[i].printdata();
    }
    for(i=0;i<nct;i++)
    {
        ct[i].printdata();
    }
    return 0;
}