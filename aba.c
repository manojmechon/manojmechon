#include <stdio.h>
#include <conio.h>
void main()
{
	char a[20];
	int i,n;
	printf("enter the character:\n");
	scanf("%s",&a);
	printf("enter times to be printed");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%s\n",a);
}
}
