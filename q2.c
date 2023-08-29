#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter a no.\n");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("No. of digits=%d",c);
    return 0;
}