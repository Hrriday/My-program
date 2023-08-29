#include<iostream>
#include<math.h>
using namespace std;
int coinmax(int* a,int l,int r)
{
    if(l+1==r)
    return max(*(a+l),*(a+r));
    int s=max((*(a+l)+min(coinmax(a,l+2,r),coinmax(a,l+1,r-1))),*(a+r)+min(coinmax(a,l+1,r-1),coinmax(a,l,r-2)));
    return s;
}
int main()
{
    int a[]={1,5,7,3,2,4};
    cout<<coinmax(a,0,5);
    return 0;
}