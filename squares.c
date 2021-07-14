#include<stdio.h>
int main()
{
  int n, sum=0;

  printf("Enter n value: ");
  scanf("%d",&n);

  for(int i=1; i<=n; i++)
  {
    if(i%2!=0) sum += i*i;
  }

  printf("Sum of squares odd numbers from 1 to %d is: %d", n, sum);

  return 0;
}
