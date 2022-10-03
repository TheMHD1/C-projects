/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
struct PartItem {
    char Number[10];
    float price;
} Part;

int main()
{
    Part.price = 0.35;
    strcpy(Part.Number, "SMS0001");
    printf("Part Price: %f\n", Part.price);
    printf("Part Numner: %s", Part.Number);
    

    return 0;
}
