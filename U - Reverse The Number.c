#include<stdio.h>
int
main ()
{
  int x;
  scanf ("%d", &x);
  for (int i = 0; i < x; i++)
    {
      int n;
      scanf ("%d", &n);
      int a = 0;
      while (n > 0)
	{
	  int b = n % 10;
	  a = a * 10 + b;
	  n /= 10;
	}
      printf ("%d\n", a);
    }

      return 0;
    }
