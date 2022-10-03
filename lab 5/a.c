/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int largest(int a, int b, int c)
{
   if(a>=b && a>=c) return a;
   else if(b>=a && b>=c) return b;
   else return c;
}

int main()
{
   int num1, num2, num3, largestnumber;

   printf("Enter three numbers: ");
   scanf("%d %d %d", &num1, &num2, &num3);

   largestnumber = largest(num1, num2, num3);
   printf("Largest number = %.d",largestnumber);
   return 0;
}
