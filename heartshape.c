#include <stdio.h>

int
main ()
{
  int n = 12, j, i, s;

  for (i = n / 2; i <= n; i+=2)
    {
      for (j = 1; j < n - i; j+=2)
	{

	  printf (" ");
	}
	  for (j = 1; j <=i; j++)
	    {
	      printf ("*");
	    }
	  for (j = 1; j <= n - i; j++)
	    {
	      printf (" ");
	    }
	  for (j = 1; j <= i-1; j++)
	    {
	      printf ("*");
	    }
	
      printf ("\n");
    }


  for (i = n; i >= 1; i--)
    {
      for (s = i; s < n; s++)
	{
	  printf (" ");
	}
      for (j = 1; j <= i; j++)
	{
	  printf ("* ");
	}
      printf ("\n");
    }
  return 0;
}