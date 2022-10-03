
#include <stdio.h>
#include <string.h>
struct PartItem {
    char Number[10];
    float price;
    int Qty;
    float Inventory; 
    
} Part, OldPart;

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
    
    printf("%s  %.2f  %d  %.2f \n",Part.Number, Part.price, Part.Qty, Part.Inventory);
    
    printf("%s  %.2f  %d  %.2f \n",OldPart.Number, OldPart.price, OldPart.Qty, OldPart.Inventory);
    
    
    return 0;
}
