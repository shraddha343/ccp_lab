#include<stdio.h>
int main()
{
  int num1, num2, num3;
  printf("\n ENTER THE THREE NUMBERS : ");
  scanf("%d %d %d",&num1,&num2,&num3);
  if(num1<num2)
  {
    if(num1<num3)
    printf("\n %d IS THE SMALLEST NUMBER",num1);
    else
    printf("\n %d IS THE SMALLEST NUMBER",num3);
  }
  else if(num2<num3)
  printf("\n %d IS THE SMALLEST NUMBER",num2);
  else
  printf("\n %d IS THE SMALLEST NUMBER",num3);
  return 0;
}
