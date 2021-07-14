#include<stdio.h>
int main()
{
  int i, n, temp, arr[10], largest=-1111, smallest=1111, lp=0, sp=0;
  printf("\n ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ");
  scanf("%d",&n);
  printf("\n ENTER THE VALUE OF ELEMENTS: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    if(arr[i]>largest)
    {

      largest=arr[i];
      lp=i;
    }
    if(arr[i]<smallest)
    {
      smallest=arr[i];
      sp=i;
    }
  }
  printf("\n THE SMALLERST no. IN THE ARRAY IS %d",smallest);
  printf("\n THE LARGEST NO. IN THE ARRAY IS %d",largest);
  temp=arr[lp];
  arr[lp]=arr[sp];
  arr[sp]=temp;
  printf("\n THE NEW ARRAY IS: ");
  for(i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
  return 0;
}
