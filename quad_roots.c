#include<stdio.h>
#include<math.h>
int main()
{
  int a, b, c;
  float D, r1, r2;
  printf("\n ENTER VALUE OF A B AND C : ");
  scanf("%d%d%d",&a, &b ,&c);
  D=(b*b)-(4*a*c);
  if(D>0)
  {
   r1=(-b+sqrt(D))/(2*a);
   r2=(-b-sqrt(D))/(2*a);
   printf("\n THE ROOTS ARE %f and %f", r1, r2);
  }
  else if(D==0)
  {
   r1=r2=-b/(2*a);
   printf("\n THE ROOTS ARE %f AND %f", r1, r2);
  }
  else
  printf("\n ROOTS ARE IMAGINARY");
  return 0;
}
