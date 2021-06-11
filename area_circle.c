#include <stdio.h>
#include<math.h>
float area_circle(float);
int main()
{
   float radius,area;
   printf("Enter the radius of circle : ");
   scanf("%f", &radius);
   area=area_circle(radius);
   printf("Area of circle : %f",area);
   return 0;
}
float area_circle(float r)
{
   float A;
   A=3.14*pow(r,2);
   return A;
}
