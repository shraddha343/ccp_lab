#include<stdio.h>
#include<stdio.h>
int main()
{
    int no1,no2;
    int *r1,*r2;
    int sum,sub,mult;
    float div;
    printf("Enter number1:\n");
    scanf("%d",&no1);
    printf("Enter number2:\n");
    scanf("%d",&no2);
    r1=&no1;
    r2=&no2;
    sum=(*r1) + (*r2);
    sub=(*r1) - (*r2);
    mult=(*r1) * (*r2);
    div=(*r1) / (*r2);
    printf("sum= %d\n",sum);
    printf("subtraction= %d\n",sub);
    printf("Multiplication= %d\n",mult);
    printf("Division= %f\n",div);
    return 0;
}
