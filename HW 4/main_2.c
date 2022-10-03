

#include <stdio.h>
#include <stdbool.h>

bool calculateBox(double, double, double, double *,double * );
int main()
{
    
    double l,w,h,Area,Volume;
    bool res;
    
    printf("Enter the length:");
    scanf("%lf",&l);
    printf("Enter the width:");
    scanf("%lf",&w);
    printf("Enter the height:");
    scanf("%lf",&h);
    calculateBox(l,w,h, &Area, &Volume);
    res = calculateBox;
    if(res == false)
        printf("!!!Enter the values greater than 0.");
    if(res == true)
    printf("The area of the box is:%2.f and the volume of the box is:%2.f",Area,Volume);
    
    
    
    
        
        
    
}


bool calculateBox(double length, double width, double height, double *surfaceArea,double *volume){
    
    
    
    
    if(length == 0 || width==0 || height == 0){
        
        return false;
    }
    
    else{
        
        *surfaceArea = (2*length*width) + (2*length*height) + (2*width*height);
        *volume = length*width*height;
    
        return true;
    }
    
}