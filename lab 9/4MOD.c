
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
    
    printf("Part number: \n");
    fgets(OldPart.Number,10,stdin);
    printf("Enter part price: ");
    scanf("%f",&OldPart.price);
    printf("Enter part quantity: ");
    scanf("%d",&OldPart.Qty);
    OldPart.Inventory = (OldPart.price)*(OldPart.Qty);

    
    printf("%s  %.2f  %d  %.2f \n",Part.Number, Part.price, Part.Qty, Part.Inventory);
    
    printf("%s  %.2f  %d  %.2f \n",OldPart.Number, OldPart.price, OldPart.Qty, OldPart.Inventory);
    
    
    return 0;
}
