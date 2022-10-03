/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char provinces[6][20] = {"Ontario","Quebec","Manitoba","Alberta","British Columbia","Nova Scotia"};
    char temporary[20] = {'\0'};
    int i, j;
    
    for(i=0; i<6-1;i++){
        
        for(j=i+1; j<6; j++){
            
            if(strcmp((provinces[i]),provinces[j])<0){
                
                
                strcpy(temporary,provinces[i]);
                strcpy(provinces[i],provinces[j]);
                strcpy(provinces[j],temporary);
            }
        }
    }
    
    printf("Provinces in alphabetical order:\n");
    for(i=0;i<6;i++){
        
        printf("%s\n",provinces[i]);
    }
    
}
