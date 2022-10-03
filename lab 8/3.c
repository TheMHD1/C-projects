/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void upper_case(char string1[200]){
    char chr1;
    for (int i = 0 ; string1[i] != '\0' ; i++){
        chr1 = string1[i];
        printf("%c",toupper(chr1));
        
    } 
}
    void lower_case(char string2[200]){
    char chr2;
    for (int i = 0 ; string2[i] != '\0' ; i++){
        chr2 = string2[i];
        printf("%c",tolower(chr2));
        
    } 
}

int main()
{
    
    char string[200], chr;
    int  i;
    
    printf("Enter the word: ");
    fgets(string,200,stdin);
    printf("Upper Case: ");
    upper_case(string);
    printf("Lower Case: ");
    lower_case(string);
    return 0;
    
}
