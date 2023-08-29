#include<iostream>
#include<vector>
using namespace std;
int indexofmax(int max[],int n)
{
    int m=max[0],c=0;
    for(int i=0;i<n;i++)
    {
        if(max[i]>m)
        {
            m=max[i];
            c=i;
        }
    }
    max[c]=-1;
    return c;
}
int main()
{
    int n,i,c=0,b,f=0,s=0,min,h=0;
    vector<int> a;
    cin>>n;
    int max[n],k[n];//k is the no of demons in each cave
    for(i=0;i<n;i++)
    {
        cin>>k[i];
        s+=k[i];
        for(int j=0;j<k[i];j++)
        {
            cin>>b;
            a.push_back(b);
            if(f==0)
            {
                max[i]=b;
                f=1;
            }
            if(b>max[i])
            max[h++]=b;
        }f=0;
    }
    int a1[s];
    int s1=0;
    for(i=0;i<n;i++)
    {
        int l=indexofmax(max,n);//return index of max number in max array and make the value at that index as -1;
        for(int j=0;j<l;j++)
        {
            s1+=k[j];
            for(int z=s1;z<(s1+a[l]-1);z++)
            a1[c++]=a[z];
        }
    }f=0;
    for(i=0;i<s;i++)
    {
        if(f==0)
        {
            min=a1[i]-i+1;
            f=1;
        }
        else if((a1[i]-i+1)>min)
        min=a1[i]-i+1;
    }
    cout<<min;
    return 0;
}