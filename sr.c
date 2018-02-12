include<stdio.h>
#include <conoi.h>
int main()
{
	int m,n,temp;
	printf("enter m and n\n");
	scanf("%d\n%d",&m,&n);
	temp=m;
	m=n;
	n=temp;
	printf("%d\n%d",m,n);
	return 0;
}
