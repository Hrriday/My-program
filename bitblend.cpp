#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s=0,c1=0,c2=0,onec1,onec2,zeroc1,zeroc2,m,i;
	    vector<int> v1,v2;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        b[i]=a[i]%2;
	        s+=b[i];
	    }
	    if(s==0||s==n)
	    cout<<-1<<endl;
	    else if(n==2)
	    cout<<0<<endl;
	    else
	    {
	        for(i=0;i<n;i++)
	        {
	            if(b[i]!=i%2)//0101010101010
	            {
	                c1++;
	                v1.push_back(i);
	            }
	            else
	            {
	                if(b[i]==1)
	                onec1=i;
	                else
	                zeroc1=i;
	            }
	            if(b[i]!=(i+1)%2)//1010101010101
	            {
	                c2++;
	                v2.push_back(i);
	            }
	            else
	            {
	                if(b[i]==1)
	                onec2=i;
	                else
	                zeroc2=i;
	            }
	        }
	        m=min(c1,c2);
	        cout<<m<<endl;
	        if(m==0)
	        continue;
	        for(i=0;i<m;i++)
	        {
	            if(c1<=c2)
	            {
	                if(b[v1[i]]==0)
	                {
	                    cout<<v1[i]+1<<" "<<onec1+1<<endl;
	                }
	                else
	                cout<<v1[i]+1<<" "<<onec1+1<<endl;
	            }
	            else
	            {
	                if(b[v2[i]]==0)
	                {
	                    cout<<v2[i]+1<<" "<<onec2+1<<endl;
	                }
	                else
	                cout<<v2[i]+1<<" "<<onec2+1<<endl;
	            }
	        }
	    }
	}
	return 0;
}