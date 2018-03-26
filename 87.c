#include <stdio.h>
#include <conio.h> 
int main(void) 
{
	int n1,n2,j,gcd;
	scanf("%d %d",&n1,&n2);
	for(j=1 ;j<=n1 && j<=n2; ++j)
	{
		if(n1%j==0 && n2%j==0)
		{
			gcd=j;
		}
	}
	printf("gcd=%d",gcd);
	return 0;
}
