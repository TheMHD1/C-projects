/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdbool.h>
#include <stdio.h>
bool calculateBox (double length, double width, double height, double
*surfaceArea, double *volume){

    if (length > 0 & width > 0 & height > 0){
    *surfaceArea = (2*length*width)+(2*length*height)+(2*width*height);
    *volume = length*width*height;
    return true;
    }
    else return false; 
}

int main()
{
    double length,width,height,surfaceArea,volume;
    bool box;
    printf("Enter length: ");
    scanf("%lf",&length);
    printf("Enter width: ");
    scanf("%lf",&width);
    printf("Enter height: ");
    scanf("%lf",&height);
    box = calculateBox (length, width, height, &surfaceArea, &volume);
    if(box == true){
    printf("Surface Area of box %fl \n", surfaceArea);
    printf("Volume of box:  %fl \n", volume);
    }
    else{
        printf("incorrect input");
    }
    
    
    return 0;
}
