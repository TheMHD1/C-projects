/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void tossDie(int dice[6]){
    srand(time(NULL));
        for (int i = 0; i < 6; i++){
        dice[i] = rand() %6 + 1;
    }
    
}

int main()
{
    int dice[6], toss;
    tossDie(dice);
    for (int i = 0; i < 6; i++){
        printf("%d ", dice[i]);
    }

    return 0;
}
