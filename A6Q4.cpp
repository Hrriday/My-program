/*Assume that a bank maintains 2 types of accounts for customers, one called as savings account and the other 
as current account.  The savings account provides compound interest and withdrawal facilities but no check 
book facility. The current account provides check book facility but no interest. Current account holders must 
also maintain a minimum balance and if the balance falls below this level, a service charge is imposed.  
Create a class account that stores customer name, account number and type of account.From this, derive cur_acct
 and sav_acct to make them more specific to their requirements. Include necessary member functions in order 
 to achieve the following tasks:
a) accept deposit from a customer and update the balance.
b) Display the balance.
c) Compute and deposit interest.
d) Permit withdrawal and update the balance.
e) check for the minimum balance. Impose penalty if necessary, and update the balance.*/
#include<iostream>
#include<math.h>
using namespace std;
class account
{
    public:
    int acc_no,typeofacc,balance;
    string name;
    void getdata()
    {
        cout<<"Enter name and account number and balance\n";
        cin>>name>>acc_no>>balance;
        cout<<"Enter 1 for current account and 2 for saving account\n";
        cin>>typeofacc;
    }
    void deposit()
    {
        int a;
        cout<<"Enter amount to be deposited\n";
        cin>>a;
        balance+=a;
    }
    void display()
    {
        cout<<"Balance is: "<<balance;
    }
    void withdraw()
    {
        int w;
        cout<<"Enter amount to be withdrawn\n";
        cin>>w;
        balance-=w;
    }
    void withdraw(int w)
    {
        balance-=w;
    }
    int type()
    {
        return typeofacc;
    }
    //int Balance()
    //{
      //  return balance;
    //}
};
class cur_acct:public account
{
    int min_bal;
    public:
    void setbalance(account a1)
    {
        balance=a1.balance;
    }
    void min(int a)
    {
        min_bal=a;
    }
    void check()
    {
        if(min_bal<balance)
        {
            cout<<"Balance too low, 10000 rupees will be deducted as service charge\n";
            balance-=10000;
        }
    }
    void display()
    {
        cout<<"Balance after checking for minimum balance and deducting service charge if required is "<<balance<<endl;
    }
};
class sav_acct:public account
{
    int interest;
    public:
    void setbalance1(account a1)
    {
        balance=a1.balance;
    }
    void Interest(int i)
    {
        interest=i;
    }
    void update(float t,int p)//time in years
    {
        int a=(int)(p*pow((1+interest/12),12*t));
        balance+=a;
    }
    void display()
    {
        cout<<"Balance after adding interest is: "<<balance;
    }
};
int main()
{
    int c;
    account a1;
    a1.getdata();
    if(a1.type()==1)
    {
        cur_acct c1;
        c1.setbalance(a1);
        c1.min(25000);
        c1.deposit();
        c1.withdraw();
        c1.display();
    }
    else if(a1.type()==2)
    {
        sav_acct s1;
        s1.setbalance1(a1);
        s1.Interest(6);
        float t; int p;
        cout<<"Enter time of deposit in years and principle\n";
        cin>>t>>p;
        s1.update(t,p);
        s1.deposit();
        s1.withdraw();
        s1.display();
    }
    else
    cout<<"Wrong option";
    return 0;
}