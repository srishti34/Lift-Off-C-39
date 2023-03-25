#include<stdio.h>
int main()
{
    int A[20],i,j,t,n,c=0,num;
    printf("Enter number of elements in the array");
    scanf("%d",&n);
    printf("Enter %d elements in the array",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        printf("The elements are:");
        printf("%d",A[i]);
    }
    //For sorting the elements in ascending order
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)  
      {
        if(A[i]>A[j])
        {
            t=A[i];
            A[i]=A[j];
            A[j]=t;
        }
      }
    }
    //Frequency of occurence of numbers
    printf("\nNumber\t\tFrequency");
    for(i=0;i<n;i=j)
    {
        num=A[i];
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(A[j]==num)
                c++;
            else
                break;  

        }
        printf("\n%d\t\t%d",A[i],c);
    }

return 0;
}