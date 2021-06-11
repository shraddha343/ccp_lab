#include<stdio.h>
main()
{
    float fah,cel;
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&fah);
    cel=((fah-32)*5/9);
    printf("The temperature in celsius is: %f",cel);
    getch();

}
