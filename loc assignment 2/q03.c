#include<stdio.h>
void sort(int A[100], int n);
int main()
{
 int A[100], i, n;
 
 printf("Enter the size of array: ");
 scanf("%d", &n);
 printf("Enter elements in the array: ");
 for(i=0;i<n;i++)
 {
  scanf("%d", &A[i]);
 }

sort(A,n);

 //Display sorted array
 printf("The sorted array is: \n");
 for(i=0;i<n;i++)
 {
  printf("%d ", A[i]);
 }
return 0;
}

void sort(int A[100], int n)
{
 int i,j,t;
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(A[i]>A[j])
   {
    t = A[i];
    A[i] = A[j];
    A[j] = t;
   }
  }
 }
}