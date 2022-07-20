/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

int main()
{
    Point p1;
    Point* pp1 = &p1;
    
    Point* pp2 = (Point*)malloc(sizeof(Point));
    
    pp1 -> xpos = 1;
    pp1 -> ypos = 2;
    printf("%d %d\n", pp1 -> xpos, pp1 -> ypos);
    
    pp1 -> xpos = 1;
    pp2 -> ypos = 2;
    printf("%d %d\n", pp2 -> xpos, pp2 -> ypos);
    
    free(pp2);
    
    return 0;
}
