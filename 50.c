#include <stdio.h>
#include <conio.h>
int main()
{
	int a,n;
	printf("enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a%2;
		if(n==1)
		{
			a=a/2;
			printf("yes");
		}
		else
		{
			printf("no");
		}
		return 0;
	}
}
