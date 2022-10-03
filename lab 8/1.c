/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    char string[200];
    int count=0, i;
    
    printf("Enter the word: ");
    fgets(string,200,stdin);
    for (i = 0 ; string[i] != '\0' ; i++){
        if (string[i] == ' ' && string[i+1] != ' '){
            
            count ++;
        }
        
    }
    
    printf("%d",count+1);

    return 0;
}
