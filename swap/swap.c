/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap(char** str1, char** str2) {
    char* temp = *str2;
    *str2 = *str1;
    *str1 = temp;
}

int main(void) {
    char* str1 = "Hello";
    char* str2 = "World";
    
    printf("%s %s\n", str1, str2);
    
    swap(&str1, &str2);
    
    printf("%s %s\n", str1, str2);
    
    return 0;
}



