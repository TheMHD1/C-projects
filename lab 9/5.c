
#include <stdio.h>
#include <string.h>
struct PartItem {
    char Number[10];
    float price;
    int Qty;
    float Inventory; 
    
} Part, OldPart;

void printInv(struct PartItem item);

int main()
{
    Part.price = 0.35;
    Part.Qty = 20;
    Part.Inventory = Part.price*Part.Qty;
    strcpy(Part.Number, "SMS0001");
    
    OldPart.price = 0.8;
    OldPart.Qty = 30;
    OldPart.Inventory = (OldPart.price)*(OldPart.Qty);
    strcpy(OldPart.Number, "OLS001");
    
    printInv(Part);
    printInv(OldPart);

    
    
    return 0;
}

void printInv(struct PartItem Part){
    printf("%s  %.2f  %d  %.2f \n",Part.Number, Part.price, Part.Qty, Part.Inventory);
}