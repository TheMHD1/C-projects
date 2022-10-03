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
    int i,count,j;
    int a[90];
    int freq[90];
    int randomNumber = 0;
    for (i = 0; i < 90; i++){
        a[i] = -10 + rand()%(50+10+1);
    }
    
        for (i = 0 ; i <= 90 ; i++ )
    {
        printf(" %d",a[i]);
    }
    
    for(i=0; i<90; i++)
    {
        count = 1;
        for(j=i+1; j<90; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nprinting unique numbers in the array: ");
    for(i=0; i<90; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
