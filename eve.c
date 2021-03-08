//program to check a number is odd or even
#include <stdio.h>
int main()
{
  int num;
  printf("enter a number:");
  scanf("%d",&num);
  
    if(num%2==0)
      printf("the number is even",num);
    else
      printf("the number is odd",num);
      return 0;

}