#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter nos\n");
    scanf("%d%d%d",&a,&b,&c);
    float avg=(float)((a+b+c)/3);
    printf("Average=%f",avg);
    return 0;
}