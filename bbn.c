#include<stdio.h>
#include<conio.h>
int main()
{
  int num1, num2, i, num, digit, sum;
  printf<< "Enter first number: ";
  scanf>> num1;
  printf<< "Enter second number: ";
  scanf>> num2;
  printf<< "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl;
  for(i = num1; i <= num2; i++)
  {
        sum = 0;
        num = i;
        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }
        if(sum == i)
        {
            printf<< i << endl;
        }
  }
}
