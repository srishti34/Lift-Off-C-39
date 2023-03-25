#include<stdio.h>
int main()
{
    int i,j,n,c,c_max=0,max_element;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    //To check frequency of each element
    for(i=0;i<n;i++) //for loop to hold each element
    {
        c=1;
        for(j=i+1;j<n;j++) //for loop to count the occurence of each element
        {
            if(A[j]==A[i])
            {
                c++;
                if(c>c_max) //if the current count is more than c_max then update the count
                {
                    max_element = A[j];
                    c_max=c;
                }    
            }
        }
    }
    printf("The element occuring maximun no of times = %d",max_element);
    printf("\nFrequency = %d",c_max);
    return 0;
}
