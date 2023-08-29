#include<iostream>
using namespace std;
int main()
{
    int N,x,i,j=0,f=0,e=0,g,d;
    cout<<"Enter the no. of chef birds and the time"<<endl;
    cin>>N>>x;
    cout<<"Enter the repetation time for the birds"<<endl;
    int a[N],b[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    int c=N;
    for(i=1;i<=x;i++)
    {
        f=0;
        for(j=0;j<c;j++)
        {
            if(x%a[j]==0)
            {
                b[f]=a[j];
                f++;
            }//the idea is to assign b[0]=0 if f=0 or 1 but if f=2 or more, we will remove those elements from the initial array and f from c
        }
        if(f>=2)
        {
            e=0;
            while(e<c)
            {
                d=a[e];
                for(g=0;g<f;g++)
                {
                    if(d==b[g])
                    {
                        remove(d,a,c);
                        c--;
                    }
                }
            e++;
            }
        }

    }
    cout<<"Birds left="<<c;
    return 0;
}
void remove(int a,int*b,int c)
{
    int i;
    for(i=0;i<c;i++)
    {
        if(*(b+i)==a)
        break;
    }
    i--;
    for(i;i<c-1;i++)
    *(b+i)=*(b+i+1);
}