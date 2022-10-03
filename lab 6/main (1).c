/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char string1[100] = {'a' , 'b' , 'c' , 'd'};
    char string2[100] = {'e' , 'f' , 'g' , 'h'};
    int i;
    
    for(i=0; i < 100; i++)
    {
        string2[i] = string1[i];
    }

    printf("First string = %s\n", string1);
    printf("Second string = %s\n", string2);

    return 0;
}