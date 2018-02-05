#include<stdio.h>
int main()
{
char ch;
printdf("enter any character :");
scanf("%c",&ch);
if (ch== 'a'| |ch=='e'| |ch=='i'| |ch=='o'| |ch=='u'| |ch== 'A'| |ch=='E'| |ch=='I'| |ch=='O'| |ch=='U'|)
{
printf ("'%c' is vowel.",ch);
}
else if((ch >='a'&& ch<='z')|| (ch>='A'&& ch<='Z'))
ptintf("'%c' is consonant.",ch);
}
else
{
printf("'%c' is not an alphabet.",ch);
}
return 0;
}
