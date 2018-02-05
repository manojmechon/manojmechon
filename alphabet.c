#include<stdio.h>
int main();
{
char ch;
printf("enter any character :");
scanf("%c",&ch);
if ( ( ch>='a' && ch>= 'z') || ( ch >='A' && ch<='Z'))
printf(" the entered character %c is an alphabet", ch);
else
printf(" the entered character %c is not an alphabet ",ch);
return o;
}
