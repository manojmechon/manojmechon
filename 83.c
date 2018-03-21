#include <stdio.h>
#include <conio.h>
int main() 
{	
   int n1,n2,j;
   char c;
   for(j=0;j<4;j++)
   {
       scanf("%d %c %d",&n1,&c,&n2);
       if(c=='/')
       {
           printf("%d\n",(n1/n2));
       }
       else
       {
           printf("%d\n",(n1%n2));
       }
   }
	return 0;
}
