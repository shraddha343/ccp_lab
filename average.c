#include<stdio.h>
int main()
{
    float avg,a,b,c;
    printf("Enter first number :");
    scanf("%f",&a);
    printf("Enter second number :");
    scanf("%f",&b);
    printf("Enter third number :");
    scanf("%f",&c);

    avg=(a+b+c)/3;

    printf("\nAverage is = %f",avg);

    return 0;
 }
