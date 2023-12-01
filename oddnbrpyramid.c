#include <stdio.h>

int
main ()
{
  int n = 10, i, j;

  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  if (i % 2 != 0)
	    {
	      if (i + j <= n)
		{
		  printf (" ");
		}
	      else
		{
		  printf ("%d ", i);
		}
	    }
	}
      printf ("\n");
    }
  return 0;
}
