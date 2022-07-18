/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*************************************************************************/

#include <stdio.h>

int
add (int a, int b)
{
  return a + b;
}

int
sub (int a, int b)
{
  return a - b;
}

int main (void)
{
  int a = 10, b = 20;
  int (*fptr) (int, int);

  printf ("%d\n", add (a, b));

  fptr = add;
  printf ("calling fptr %d\n", fptr (a, b));

  fptr = sub;
  printf ("calling fptr %d\n", fptr (a, b));

  return 0;
}
