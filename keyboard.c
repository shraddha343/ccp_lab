#include<stdio.h>
int main()
{
  FILE *fp;
  char data[100];
  char ch;
  printf("\nENTER THE DATA ");
  gets(data);
  fp=fopen("C:/Users/SHRADDHA/OneDrive/Desktop/BMSCE.txt","w");
  if(fp==NULL)
   {
     printf("\nERROR");
     exit(0);
   }
   fputs(data,fp);
   fclose(fp);
   fp=fopen("C:/Users/SHRADDHA/OneDrive/Desktop/BMSCE.txt","r");
   if(fp==NULL)
   {
     printf("\nFILE cant be opened");
     exit(0);
   }
   do
   {
     ch=fgetc(fp);
     putchar(ch);
   }while(ch!=EOF);
   fclose(fp);
   return 0;
}
