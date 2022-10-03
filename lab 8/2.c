/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{

  char string1[200];
  char string2[200];
  int count1 = 0, i, count2 = 0;

  printf ("Enter the word: ");
  fgets (string1, 200, stdin);
  fgets (string2, 200, stdin);

  for (i = 0; string1[i] != '\0'; i++)
    {
      count1++;
    }

  for (i = 0; string2[i] != '\0'; i++)
    {
      count2++;
    }

  if (count1 == count2)
    {
      printf ("both strings are equal.");
    }

  else
    printf ("both strings are not equal.");




  return 0;
}
