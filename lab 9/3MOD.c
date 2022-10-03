
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
    
    printf("old Part number: \n");
    fgets(OldPart.Number,10,stdin);
    printf("Enter old part price: ");
    scanf("%f",&OldPart.price);
    printf("Enter old part quantity: ");
    scanf("%d",&OldPart.Qty);
    
    printf("\nPart Price Part: %.2f\n", Part.price);
    printf("Part Numner Part: %s\n", Part.Number);
    printf("Quantity is Part: %d\n",Part.Qty);
    
    printf("\nPart Price OldPart: %.2f\n", OldPart.price);
    printf("Quantity is OldPart: %d\n", OldPart.Qty);
    printf("Part Numner OldPart: %s\n", OldPart.Number);
    
    return 0;
}
