/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i;
    int a[6];
    int b[6];
    int randomNumber = 0;
    for (i = 0; i < 6; i++){
        a[i] = 0 + rand()%(20-0+1);
        b[i] = 0 + rand()%(20-0+1);
    }
    for (i = 0 ; i <= 5 ; i++ )
    {
        printf(" %d",a[i]);
    }
    printf("\n");
        for (i = 0 ; i <= 5 ; i++ )
    {
        printf(" %d",b[i]);
    }
        for (i = 0 ; i <= 5 ; i++ )
    {
        printf("\n%d ",a[i]);
        printf("%d ",b[i]);
    }
    return 0;
}
