#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        printf("\nfizz");
        else if(i%5==0)
        printf("\nbuzz");
        else
        printf("\n%d",i);
    }
    return 0;
}