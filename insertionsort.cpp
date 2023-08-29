#include<iostream>
using namespace std;
int main()
{
    int i,t,n,j;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        j=i-1;
        t=a[i];
        while(a[j]>t&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        if(j!=i)
        {
            a[j+1]=t;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}