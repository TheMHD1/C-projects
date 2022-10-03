/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int i;
    int array1[10], sort = 0 ,temp;
    printf("Enter 1 for ascending order and 2 for descending order: ");
    while (sort != 2 && sort != 1){
    scanf("%d", &sort);
    if (sort > 2 || sort < 1){
        printf("wrong selection, try again \n");
    }
    }
    printf("Enter 10 intergals: ");
    for(i = 0 ; i < 10 ; i++){
    scanf("%d", &array1[i]);
    }
    
        if (sort == 1){
            for (int i = 0; i <= 9 ; i++){
                for (int j = i + 1 ; j <= 9 ; j++ ){
                    if (array1[i] > array1[j]){
                    temp = array1[j];
                    array1[j] = array1[i];
                    array1[i] = temp;}
                    
                }
                printf("\n%d",array1[i]);
            }
                
            
        }
        else if(sort == 2){
            for (int i = 0; i <= 9 ; i++){
                for (int j = i + 1 ; j <= 9 ; j++ ){
                    if (array1[i] < array1[j]){
                    temp = array1[j];
                    array1[j] = array1[i];
                    array1[i] = temp;
                        
                    }
                    
                }
                printf("\n%d",array1[i]);
            }
            
            
        }
        
    
    
    return 0;
}