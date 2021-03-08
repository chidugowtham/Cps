//program to find roots of a quadratic equation

 #include<stdio.h>
 #include<math.h>
 int main()
  {
    float a,b,c,D,r,r1,r2,rp,ip;
    
    printf("\nenter the cofficient:");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    
    {
      printf("\nerror!linear eauation!");
      return 0;
    }
   
     D= b*b - 4*a*c;
    
     if (D > 0)
     {
       printf("\nroots are real and distinct:");
       r1= (-b + sqrt(D))/(2 * a);
       r2= (-b - sqrt(D))/(2 * a);
       printf("\nR1= %.3f\nR2= %.3f",r1,r2);
       
      }
    
      else if (D== 0)
      {
        printf("\nroots are real and equal!");
        r= -b/(2 * a);
        printf("\nR= %.3f",r);
      }
       
      else if(D<0)
      {
        printf("\nroots are imaginary:");
        rp= -b/(2 * a);
        ip= sqrt(-D)/(2 * a);
        printf("\nR1= %.3f + %.3fi\nR2= %.3f - %.3fi",rp,ip,rp,ip);
      }
    
  }