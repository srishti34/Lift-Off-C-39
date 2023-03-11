#include<stdio.h>
int main()
{
    int n,d,s=0;
    printf("enter the number:");
    scanf("%d",&n);
    do
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    while(n>0);
    printf("sum is %d",s);
    return 0;
}