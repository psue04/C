/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
    int xpos;
    int ypos;
} Point;

int main(void)
{
    int n;
    scanf("%d", &n);
    
    Point* pi = (Point*)malloc(n * sizeof(Point));
    
    for (int i = 0; i < n; i++)
        scanf("%d %d", &pi[i].xpos, &pi[i].ypos);
        
    for (int i = 0; i < n; i++)
        printf("%d %d\n", pi[i].xpos, pi[i].ypos);
        
    free(pi);
    
    return 0;
}
