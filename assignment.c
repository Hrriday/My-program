#include<stdio.h> 
#include<string.h> 
int main() 
{ 
    char str[50]; 
    int c=0,d=0,i; 
    printf("Enter the word\n"); 
    scanf("%s",str); 
    int l=strlen(str); 
    for(i=0;i<l;i++) 
    { 
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') 
    c++; 
    else 
    d++; 
    } 
    printf("The number of vowels in this string is %d\n",c); 
    printf("The number of constants in this string is %d\n",d); 
    return 0; 
} 