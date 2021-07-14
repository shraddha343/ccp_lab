#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area;
    printf("Length of 1st side:");
    scanf("%d",&a);
    printf("Length of 2nd side:");
    scanf("%d",&b);
    printf("Length of 3rd side:");
    scanf("%d",&c);
    s=((float)(a+b+c)/2);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is:%f",area);
    return 0;

}
