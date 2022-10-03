/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float gpa[30], gpasum=0, gpa_avg = 0;
    char cont = '\0';
    int x=0, count= 0;
    printf("Enter up to 30 GPAs to calculate the average. \n");
    while(count < 30 && cont != 'y' && cont != 'Y'){
        
        printf("Enter GPA: \n");
        scanf("%f",&gpa[count]);
        if (gpa[count] <= 4 && gpa[count] >= 0){
        }
            else{
            printf("number should be between 0 and 4\n");
            printf("Enter GPA: \n");
            scanf("%f",&gpa[count]);
        }
        printf("do you want to calculate the GPA (Y or N)\n");
        scanf(" %c",&cont);
        count++;
    }
    for (x = 0; x <= count; x++){
        gpasum += gpa[x];
        
    }
    gpa_avg = gpasum / count;
    
    printf("the average GPA is: %.2f ",gpa_avg);
    return 0;
}
