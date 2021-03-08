#include <stdio.h>
 
 int main()
  {
    int a, b;
    char op;
    
    printf("\nenter the operators:");
    scanf("%c",&op);
    printf("\nenter the value of a and b:");
    scanf("%d%d",&a,&b);
    
    if(op== '+')
      printf("\nsum= %d",a+b);
    
    else if (op== '-')
      printf("\ndifference= %d",a - b);
    else if (op == '*' )
      printf("\nproduct= %d",a * b);
    else if ("op= '/")
    {
      if(b== 0)
      {
        printf("\nerror! denominator is 0");
        return 0;
        
      }
      
      else
      printf("\nquitient= %.3f",(float)a/b);
    }
    
     else if(op== '%')
      { 
        if(b== 0)
        {
          printf("\nerror!denominator is 0");
          return 0;
          
        }
         
          else
           printf("\nremainder= %d",a % b);
         
        
      }
    
    
    
  }