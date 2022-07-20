/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* pi;
    double* pd;
    
    pi = (int*) malloc(sizeof(int));
    pd = (double*) malloc(sizeof(double));
    
    *pi = 10;
    *pd = 3.14;
    
    printf("*pi: %d, *pd: %lf\n", *pi, *pd);
    
    free(pi);
    free(pd);
    
    return 0;
}
