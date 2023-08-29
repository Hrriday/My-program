//To find whether the entered number is prime.
//We will input a number and check its factors to find out whether its  prime or not.
#include<stdio.h>
int main()
{
    int i,c=0,n;
    printf("Enter a no.");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    {
        printf("\nPrime");
    }
    else
    {
        printf("\nNot prime");
    }
    return 0;
}