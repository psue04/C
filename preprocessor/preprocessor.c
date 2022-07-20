/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#ifdef TEST
#define NAME "Alice"
#define AGE 24
#else
#define NAME "Bob"
#define AGE 25
#endif

int main(void){
    printf("%s\n", NAME);
    printf("%d\n", AGE);
    return 0;
}
