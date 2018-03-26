include <stdio.h>
#include <conio.h>
int main(void)
{
	char a[10];
	int m;
	scanf("%s",a);
	for(m=0;a[m]!='\0';m++)
	{
		if(a[m]>='0' && a[m]<='9')
		{
			printf("%c",a[m]);
		}
	}
	return 0;
}
