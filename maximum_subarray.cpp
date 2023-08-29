#include<iostream>
using namespace std;
string maxSubarraySum(int a[],int changeArray[],int l,int r,int n)
{
    if(n==2)
    {
        return to_string(changeArray[l]+changeArray[r])+to_string(l)+to_string(r);
    }
    int i,j,dayl,dayr;
    int sum=0,sumleft=0,sumright=0;
    int maxl=changeArray[n/2-!(n%2)],maxr=changeArray[n/2+1],sl=0,sr=0;
    j=n/2+1;
    for(i=n/2-!(n%2);i>=l;i--)
    {
        sl+=changeArray[i];
        if(sl>maxl)
        {
            maxl=sl;
            dayl=i-1;
        }
        if(j<=r)
        sr+=changeArray[j];
        if(sr>maxr)
        {
            maxr=sr;
            dayr=j;
        }
        if(j<=r)
        j++;
    }
    sum=maxl+maxr;
    string sums=to_string(sum)+to_string(dayl)+to_string(dayr);
    string sumlefts=maxSubarraySum(a,changeArray,0,n/2-!(n%2),n/2+n%2);
    string sumrights=maxSubarraySum(a,changeArray,n/2,n-1,n/2+n%2);
    sumleft=sumlefts[0]-'0';
    sumright=sumrights[0]-'0';
    return (sum>sumright)?((sum>sumleft)?sums:sumlefts):((sumright>sumleft)?sumrights:sumlefts);
}
int main()
{
    int a[]={10,7,8,11,15,12,6,14,9};
    int n=sizeof(a)/sizeof(a[0]);
    int changeArray[n];
    changeArray[0]=0;
    for(int i=1;i<n;i++)
    {
        changeArray[i]=a[i]-a[i-1];
    }
    string ans=maxSubarraySum(a,changeArray,0,n-1,n);
    int max=ans[0]-'0';
    int buy=ans[1]-'0';
    int sell=ans[2]-'0';
    cout<<"Max profit="<<max<<endl;
    cout<<"This profit is made by buying on day "<<buy<<" and selling on day "<<sell<<endl;
    return 0;
}