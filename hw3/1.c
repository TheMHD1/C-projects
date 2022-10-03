/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int gcd(int num1, int num2){
    int gcdt;
    
    if (num1 == 0 && num2 == 0){
         return -1;

    }
    if (num1 < 0){
        num1 = -num1;
    }
    if (num2 < 0){
        num2 = -num2;
    }
    
    int i;
        for (i = 1; i <= num1 && i <= num2; i++){
        if (num1 % i == 0 && num2 % i == 0){

        gcdt = i;
        }
        }
        return gcdt;
        
}



int main()
{
    int num1, num2, gcdnum=0;
    printf("Enter two integers: ");
    scanf("%d %d",&num1 ,&num2);
    if (gcdnum == -1){
        printf("At least one number must be nonzero \n");
    }
    gcdnum = gcd(num1, num2);
    
    printf ("GCD of %d and %d is %d \n",num1 , num2, gcdnum);
return 0;
}
