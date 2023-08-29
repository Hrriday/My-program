#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 3 nos.\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("Largest no. is %d",d);
    return 0;
}