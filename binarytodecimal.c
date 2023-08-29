#include<stdio.h>
#include<math.h>
int main()
{
    int d,s=0,n;
    printf("Enter a no.\n");
    scanf("d",&n);
    for(int i=0;;i++)
    {
        if(n=0)
        {
            break;
        }
        d=n%10;
        s=s+d*pow(2,i);
        n=n/10;
    }
    printf("%d",s);
    return 0;
        
    
}