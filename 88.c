#include <stdio.h>
#include <conio.h>
int main(void) 
{
int i,j,remainder,lcm,gcd,a,b;
printf("\n enter the first number:");
scanf("%d",&i);
printf("\n enter the second number:");
scanf("%d",&j);
a=i;
b=j;
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}
while(remainder!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("\n the lcm of the given number is: %d",lcm);
return 0;
}
