# include <stdio.h> 
# include <conio.h>
void main() 
{ 
 int j,n,d; 
 clrscr(); 
 printf("Enter the limit : "); 
 scanf("%d", &n); 
 printf("\nEnter the number : ") ; 
 scanf("%d", &d); 
 printf("\nThe numbers divisible by %d are :\n\n", d) ; 
 for(j = 1 ; j<= n ; j++) 
 if(j % d == 0) 
 printf("%d\t",j) ; 
 getch(); 
}
