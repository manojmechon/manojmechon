include<stdio.h>
#include<conio.h>
int main()
{
int num,count=0;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
num=num/10;
count++;
}
printf("\n no.of digits is:%d",count);
return 0;
}
