/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[]) {
    int i;
    for (int i = 0; i < argc; i++){
        printf("arg[%d]: %s\n", i, argv[i]);
    }
    return 0;
}
