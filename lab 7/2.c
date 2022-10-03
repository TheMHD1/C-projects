/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void calc_area_parameter(int lenght , int width , int *area, int *parameter){
    *area = lenght * width;
    *parameter = 2 * (lenght+width);
}

int main()
{
    int lenght , width, area, parameter;
    printf("Enter lenght\n");
    scanf("%d" ,&lenght);
    printf("Enter width\n");
    scanf("%d" ,&width);
    
    calc_area_parameter(lenght , width , &area, &parameter);
    
    printf("area of a rectangle: %d \n", area);
    printf("parameter of a circle: %d \n", parameter);
    return 0;
}
