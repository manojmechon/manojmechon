#include <stdio.h>
#include <conio.h>
int main(void) 
{
	int n,j;
	printf("enter the number:");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		if(n%j==0)
		{
			printf("%d ",j);
		}
	}
	return 0;
}
