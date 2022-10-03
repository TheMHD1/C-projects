/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char string[200];
    int count=0, i,chr1;
    printf("Enter your first name:");
    fgets(string,200,stdin);
    printf("upper case name: ");
    for (i = 0 ; string[i] != '\0' ; i++){
        chr1 = string[i];
        printf("%c",toupper(chr1));
    }
    printf("number of characters: %d",(i-1));
    
    

    return 0;
}
