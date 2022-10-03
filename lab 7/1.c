/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int *iPtr;
    char *cPtr ;
    float *fFloat;
    
    int iNumber = 1 ;
    char cCharacter = 'c' ;
    float fNumber = 2.5 ;
    
    iPtr = &iNumber;
    cPtr = &cCharacter;
    fFloat = &fNumber;
    
    printf("variable: \n");
    printf("*iPtr = %d \n &iNumber = %d\n", *iPtr, iNumber);
    printf("*cPtr = %c \n &cCharacter = %c\n", *cPtr, cCharacter);
    printf("*cPtr = %f \n &cCharacter = %f\n", *fFloat, fNumber);
    
    printf("\n memory location:  \n");
    printf("*iPtr = %p \n &iNumber = %p\n", iPtr, &iNumber);
    printf("*iPtr = %p \n &iNumber = %p\n", cPtr, &cCharacter);
    printf("*iPtr = %p \n &iNumber = %p\n", fFloat, &fNumber);

    return 0;
}
