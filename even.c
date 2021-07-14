#include<stdio.h>
int main()
{
	int m,n,i;
	printf("Enter a number m:");
	scanf("%d",&m);
	printf("Enter a number n:");
	scanf("%d",&n);
	printf("Even numbers from m till %d:\n",n);
	for(i=m;i<=n;i++)
	{
	    if(i%2==0)
		printf("%d ",i);
	}
	return 0;
}
