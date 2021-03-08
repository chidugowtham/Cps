//program to calculate the electricity bill
#include <stdio.h>
int main()
{
  float units,rate,tot;
  char name[30];

  printf("\nenter the consumer name:");
  gets(name);
  printf("\nenter the units consumed:");
  scanf("\n%f",&units);
  
  if(units<0)
  {
    printf("\ninvalid units!");
    return 0;

  }
  if (units<=200)
   rate=0.8*units;

  else if((units>200)&&(units<=300))
   rate=0.8 * 200 + 0.9 * (units-200);
  else if(units>300)
   rate = 0.8 * 200 + 0.9 * 100 + 1.0 * (units-300);

  tot = rate + 100;
  if(tot>400) 
   tot = 0.15 * tot + tot;
   printf("\nname: %s ",name);
   printf("\nunits: %.0f",units);
   printf("\nbill amt: Rs. %.2f",tot);
}
