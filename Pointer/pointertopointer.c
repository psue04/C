/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int i = 10;
    int* pi = &i;
    int** ppi = &pi;
    
    //i = 20; *pi = 20; **ppi = 20;
    
    printf("%d\n", i);
    printf("%d\n", *pi);
    printf("%d\n", **ppi);
    
    return 0;
}
