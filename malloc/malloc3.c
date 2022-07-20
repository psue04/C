/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, len;
    scanf("%d", &len);
    
    int* array = (int*) malloc(sizeof(int) * len);
    
    for (i = 0; i < len; i++) {
        array[i] = i;
    }
    
    for (i = 0; i < len; i++) {
        printf("array[%d]: %d\n", i ,array[i]);
    }
    
    free(array);
    
    return 0;
}
