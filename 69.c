#include <stdio.h>
#include <conio.h>
int main(void) 
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a;
	a=m-n;
	if(a%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
	return 0;
}
