/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
    int x;
    int y;
} Point;

int main(void)
{
    int i;
    Point points[5];
    Point* ppoints = (Point*) malloc(sizeof(Point) * 5);
    
    for (i = 0; i < 5; i++) {
        printf("p[%d] (%d, %d)\n", i, ppoints[i].x, ppoints[i].y);
    }
    
    free(ppoints);
    
    return 0;
}
