
#include<stdio.h>
#include<conio.h>
int main()
{
 int count=0;
 int number;
 printf<<"Enter an Integer:";
 scanf>>number;
  for(int i=1;i<=number;i++)
  {
	   if(number%i==0)
	   {
			count++;
	   }
  }
     if(count==2)
  	 printf<<number << " is prime" << endl;
     else
     printf<<number <<" is not prime " << endl;
  system("PAUSE");
  return(0);
}
