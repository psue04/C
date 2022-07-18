/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void printArray(int arr[], int len) {
    int i;
    printf("sizeof: %ld\n", sizeof(arr));
    for (int i = 0; i < len; i++)
        printf("[%d]: %d\n", i, arr[i]);
}

int main(void) {
    int arr[] = {1, 2, 3};
    
    printArray(arr, 3);
    
    return 0;
}
