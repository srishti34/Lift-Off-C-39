#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n],b[n];
    printf("Enter elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
  
    // copying elements from one array to another
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    // display of 1st array before copying elements
    printf("The first array is :");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    // display of array after copying the elements
    printf("\nThe second array is :");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", b[i]);
    }
    return 0;
}
