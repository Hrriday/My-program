#include<iostream>
using namespace std;
void towersofhanoi(int n,char source,char helper, char destination)
{
    if(n==1)
    cout<<"move disk 1 from "<<source<<" to "<<destination<<endl;
    else
    {
    towersofhanoi(n-1,source,destination,helper);
    cout<<"move disk "<<n<<" from "<<source<< " to "<<destination<<endl;
    towersofhanoi(n-1,helper,source,destination);
    }
}
int steps(int n)
{
    if(n==1)
    return 1;
    return 2*steps(n-1)+1;
}
int main()
{
    int n;
    cin>>n;
    char A,B,C;
    cin>>A>>B>>C;
    towersofhanoi(n,A,B,C);
    int c=steps(n);
    cout<<"No. of steps = "<<c;
    return 0;
}