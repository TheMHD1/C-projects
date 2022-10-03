/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
float pay_rate(char pay_char);
float total_pay(float hours, float rate);
float pay_rate(char pay_char){
    float rate= 0;
    if(pay_char == 'A'){
        rate= 12.5;
    }
    else if(pay_char == 'B'){
        rate= 15;
    }
    else if(pay_char == 'C'){
        rate= 20;
    }
    else if(pay_char == 'D'){
        rate= 25;
    }
    else {
        rate= 0;
    }
    return rate;
}
float total_pay(float hours, float rate){
    float pay = 0;
    if (hours < 40){
        pay = hours * rate;
    }
    else if (hours <= 44 && hours >= 40){
        pay = (40*rate) + (rate*1.5*(hours - 40));
    }
    else{
        pay = (40*rate) + (1.5*4*rate) + (2*(hours - 44)*rate);
        
    } 
    return pay;
    
}



int main()
{
    float hours, rate, pay;
    char pay_char;

    printf("Enter the pay category A , B, C, D : ");
    scanf("%c", &pay_char);
    
    printf("Enter the total hours worked: ");
    scanf("%f", &hours);
    rate = pay_rate(pay_char);
        if (rate == 0){
        printf("rate entery is wrong \n");
    }
    printf("the rate is: %.2f \n",rate);
    printf("the total pay is %.2f",total_pay(hours, rate));

    return 0;
}
