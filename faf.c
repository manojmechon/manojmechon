#include <stdio.h>
#include <conio.h>
main()
{
 int m,n,temp;
 printf("\n Enter the value 1");
 scanf("%d",&m);
 printf("\n Enter the value 2");
 scanf("%d",&n);
 m=m||n;
 n=n||m;
 {
  temp=m;
  m=n;
  n=temp;
}
 printf("%d",m);
 printf("%d",n);
 }
