//program to inplement linear search algorithum

#include<stdio.h>

int main()
{ 
    int i, ele, n;

    printf("\nenter size of array:");
    scanf("%d",&n);

    int A[n];

    printf("\nEnter array elements:");
    for(i=0; i<n; i++)

    {
        scanf("%d",&A[i]);
    }

    printf("\nEnter the search elements:");
    scanf("%d",&ele);

    for(i=0; i<n; i++)
    {
      if(A[i] == ele)
      {
        printf("\nElemeant found at position: %d",i+1);
        break;
      }
    }
    
    if(i==n)
    {
      printf("\nElement not found");
    }
}
