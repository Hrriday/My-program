#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year\n");
    scanf("%d",&n);
    if(n%4==0&&n%100!=0||n%400==0)
    printf("Leap year\n");
    else
    {
        printf("Not a leap year\n");
    }
    return 0;
    
}