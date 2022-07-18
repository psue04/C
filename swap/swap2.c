/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap(int* val0, int* val1) {
    int temp = *val0;
    *val0 = *val1;
    *val1 = temp;
}

int main(void) {
    int a = 10;
    int b = 20;
    
    printf("%d %d\n", a, b);
    
    swap(&a, &b);
    
    printf("%d %d\n", a, b);
    
    return 0;
}



