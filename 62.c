#include<stdio.h>
#include<string.h>
void main()
{
int a=0,b=0,count=1;
char s1[30];
printf("\nEnter a string\n");
scanf("%s",s1);
i=strlen(s1);
for(b=0;b<a;b++)
{
if((s1[a]==0)||(s1[a]==1))
{
count++;
}
}
if(count==a)
{
printf("Yes");
}
else
{
printf("No");
}
}
