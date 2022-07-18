/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void printArray(char** arr, int len) {
    int i;
    for (i = 0; i < len; i++){
        printf("[%d]: %s\n", i, arr[i]);
    }
}

int main(void) {
    char* arr[] = {"Hello", "World", "ITBT"};
    
    printArray(arr, 3);
    
    return 0;
}
