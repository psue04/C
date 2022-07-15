/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int arr2d[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };

  for (int row = 0; row < 2; row++)
    {
      printf ("row{%d}", row);
      for (int col = 0; col < 3; col++)
	{
	  printf ("%d", arr2d[row][col]);
	}
    }

  return 0;
}
