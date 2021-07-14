#include<stdio.h>
int main()
{
  char str1[10], str2[10];
  int i=0;
  printf("\n ENTER THE STRING= ");
  scanf("%s",&str1);
  while(str1[i]!='\0')
  {
    str2[i]=str1[i];
    i++;
  }
  str2[i]='\0';
  printf("\n COPIED STRING=%s \nand its length is %d",str2, i);
  return 0;
}
