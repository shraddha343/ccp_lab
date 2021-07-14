#include<stdio.h>
int main()
{
 char str1[10], str2[10], str3[20];
 int i=0, j=0;
 printf("\n ENTER THE FIRST STRING= ");
 scanf("%s",&str1);
 printf("\n ENTER THE SECOND STRING= ");
 scanf("%s",&str2);
 while(str1[i]!='\0')
 {
  str3[j]=str1[i];
  i++;
  j++;
 }
 i=0;
 while(str2[i]!='\0')
 {
  str3[j]=str2[i];
  i++;
  j++;
 }
 str3[j]='\0';
 printf("\n RESULTANT STRING =%s \nLENGTH =%d", str3, j);
 return 0;
}
