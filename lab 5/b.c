#include <stdio.h>
int addition(int a, int b)
{
    return a + b;
}
float division(float a, float b)
{
    return a / b;
}
int subtraction(int a, int b)
{
    return a - b;
}
int multiplication(int a, int b)
{
    return a * b;    
}

int main()
{
    int choice, num1, num2;
    float result;
    char continious = 'y';
    
    do{
        printf("Menu: \n     1.Add\n     2.Subtract\n     3.Multiply\n     4.Divide\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        printf("Enter your two numbers: \n");
        scanf("%d %d", &num1, &num2);
        switch (choice){
            case 1:
                result =  addition(num1, num2);
                    printf("Results = %.0f \n", result);
                    printf("Continue? \n");
                    scanf(" %c",&continious);
                break;
            case 2:
                result =  subtraction(num1, num2);
                    printf("Results = %.2f \n", result);
                    printf("Continue? \n");
                    scanf(" %c",&continious);
                break; 
            case 3:
                result =  multiplication(num1, num2);
                    printf("Results = %.2f \n", result);
                    printf("Continue? \n");
                    scanf(" %c",&continious);
                break;
            case 4:
                result =  division(num1, num2);
                    printf("Results = %.2f \n", result);
                    printf("Continue? \n");
                    scanf(" %c",&continious);
                break;
        }
    }
    while(continious == 'y');
    
    return 0;
}
