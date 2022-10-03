/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void min_max(int arr[], int *min, int *max) {
    int i;
    *min = arr[0];
    *max = arr[0];
    for (i = 0; i < 10; ++i) {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}


int main() {
    
    srand(time(NULL));
    int i, num[10], min, max;
    printf("the random array is: ");
    for (i = 0; i < 10; ++i) {
        num[i] = rand() % 101;
        printf("%d ", num[i]);
    }

    min_max(num, &min, &max);
    printf("\nMinimum value is  = %d\nMaximum value is = %d\n", min, max);
    return 0;
}