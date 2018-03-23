#include<stdio.h>
#include<string.h>
int main()
{
  char string1[50],string2[50];
  int a,b,count=0,len1,len2;
  printf("enter the string1");
  scanf("%s",string1);
  printf("enter the string2");
  scanf("%s",string2);
  len1=strlen(string1);
  len2=strlen(string2);
  for(a=0,b=0;string1[a]!='\0',string2[b]!='\0';a++,b++)
  {
    if(string1[a]==string2[b])
    {
      count++;
    }
  }
if(count==len1 && count==len2)
{
  printf("yes");
}
else
{
  printf("no");
}
  
}
