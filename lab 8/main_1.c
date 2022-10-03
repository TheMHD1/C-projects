/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include<ctype.h>

void toUpper (char[]);
void toLower (char[]);
void
main ()
{
  char s1[200] = { '\0' };
  char s2[200] = { '\0' };


  printf ("Input the string:");
  fgets (s1, 200, stdin);
  toUpper (s1);
  printf ("%s", s1);


}

void
toUpper (char string[])
{

  int i;
  char temp;

  for (i = 0; string[i] != '\0'; i++)
    {
      temp = string[i];
      toupper (temp);
      string[i] = temp;
      i++;
    }


}
