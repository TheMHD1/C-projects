#include <stdio.h>
#include <string.h>
struct PartItem {
    char Number[10];
    float price;
    int Qty;
    float InventoryTT; 

} Part, OldPart;

void printInv(struct PartItem Part);
float FindInv(struct PartItem Part);

int main()
{
    Part.price = 0.35;
    Part.Qty = 20;
    strcpy(Part.Number, "SMS0001");

    printf("Part number: \n");
    fgets(OldPart.Number,10,stdin);
    printf("Enter part price: ");
    scanf("%f",&OldPart.price);
    printf("Enter part quantity: ");
    scanf("%d",&OldPart.Qty);


    printInv(Part);
    printInv(OldPart);


    return 0;
}

void printInv(struct PartItem Part){
    float Inventory;
    Inventory = FindInv(Part);
    printf("%.2f  %d  %.2f    %s\n",Part.price, Part.Qty, Inventory, Part.Number);
}
float FindInv(struct PartItem Part){
    Part.InventoryTT= Part.price*Part.Qty;
}