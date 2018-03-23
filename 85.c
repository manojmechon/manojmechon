#include <stdio.h>
#include<string.h>
int main(void)
{
	char m[10];
	int i,n;
	scanf("%s",m);
	n=strlen(m);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%c",m[i]);
		}
	}
	printf("\t");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("%c",m[i]);
		}	
	return 0;
}
}
