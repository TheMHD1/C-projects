/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // i tried to transfer the letter to ascii code but it didnt work out
    char string[200],result;
    int i;
    int count[256] = {0};
    int maximum = 0, lenght ; 
    printf("Enter a 20 characters scentence: ");
    fgets(string,200,stdin);
    if(strlen(string)>= 20){
        printf("Scentence has 20 or more characters");
        lenght = strlen(string);
        for(i = 0; i < lenght; i++){
            count[string[i]]++;
        }
        for(i = 0; i < 256; i++){
            if(count[i] > count[maximum]){
                maximum = i;
            }
        }
        printf("the most occuring char is: %c",maximum);
        
    }
    else{
        printf("Scentence does not have 20 or more characters");
    }
}