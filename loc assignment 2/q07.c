#include<stdio.h>
int main()
{
    int i,j,s,t;
    printf("Enter number of elements in the array: ");
    scanf("%d",&s);
    int A[s];
    printf("Enter elements in the array: ");
    for(i=0;i<s;i++)
    {
    scanf("%d",&A[i]);
    }
    j=0;
    for(i=0;i<s;i++)
    {
        if(A[i]<0)
        {
            if(i!=j)
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        j++;
        }
    }
    printf("The resultant array: ");
    for(i=0;i<s;i++)
    {
    printf("%d\t",A[i]);
    }
    return 0;
}