
#include <stdio.h>
#include <string.h>
struct PartItem {
    char Number[10];
    float price;
    int Qty;
} Part, OldPart;

int main()
{
    Part.price = 0.35;
    Part.Qty = 20;
    strcpy(Part.Number, "SMS0001");
    
    OldPart.price = 0.8;
    OldPart.Qty = 30;
    strcpy(OldPart.Number, "OLS001");
    
    printf("Part Price Part: %f\n", Part.price);
    printf("Part Numner Part: %s\n", Part.Number);
    printf("Quantity is Part: %d\n",Part.Qty);
    
    printf("\nPart Price OldPart: %f\n", OldPart.price);
    printf("Part Numner OldPart: %s\n", OldPart.Number);
    printf("Quantity is OldPart: %d\n", OldPart.Qty);
    
    
    return 0;
}
