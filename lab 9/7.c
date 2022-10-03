/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct PartItem
{
    char number[20];
    float Price;
    int Qty;
};
void PrintInv (struct PartItem Part)
{
    printf("%s  %.2f    %d \n",Part.number, Part.Price, Part.Qty);
}

int main()
{
    struct PartItem PartA[3] = { 
    {"SMS0001", 0.35, 20}, 
    {"OLS0001", 0.60, 30},
    {"VVU0001", 0.25, 50} 
    };
    printf (" Number, Price, Qty: \n");
    for (int i = 0; i < 3; i++)
    
    {
      
PrintInv(PartA[i]);
    
}

    return 0;
}
