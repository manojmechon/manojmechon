#include<stdio.h>
#include <conio.h>
int main(void)
{
int n,j,flag=0;
scanf("%d",&n);
for(j=2;j<=n/2;j++)
{
if(n%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\n no");
}
else
{
printf("\n yes");
}
return 0;
}
