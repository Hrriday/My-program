//to print prime factors of a number
#include<stdio.h>
int main()
{
    int n,i,c=0,prime=0,j;
    printf("Enter a no.\n");
    scanf("%d",&n);
    printf("The prime factors are\n");
    for(i=2;i<n/2;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==0)
        prime=1;
        if(n%i==0&&prime)
        {
            printf("%d\n",i);
        }
    prime=0;
    c=0;
    }
return 0;
}