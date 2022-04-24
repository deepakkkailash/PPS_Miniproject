#include <stdio.h>
#include <math.h>

int
calc ()
{
  int input;
  int x, y, i, fact;
  printf
    ("Enter what you want? \n+:1; \n -:2; \n *:3; \n /:4; \n !:5 \n pow:6 \n sin:7 \n cos:8 \n tan:9\n mod:10 \n sqr:11 \n cube:12 \n sqrt:13 \n ln:14 ");
  scanf (" \n %d %d %d", &input, &x, &y);
  if (input == 1)
    {
      printf ("%d", x + y);
    }
  else if (input == 2)
    {
      printf ("%d", x + y);
    }
  else if (input == 3)
    {
      printf ("%d", x * y);
    }
  else if (input == 4)
    {
      printf ("%d", x / y);
    }
  else if (input == 5)
    {
      i = 1;
      fact = 1;
      while (i <= x)
	{
	  fact = i * fact;
	  i++;
	}
      printf ("%d", fact);
    }
  else if (input == 6)
    {
      printf ("%.1lf", pow (x, y));
    }
  else if (10 > input > 6)
    {
      double radian;
      radian = x * (M_PI / 180);
      if (input == 7)
	{
	  printf ("%.2lf", sin (radian));
	}
      if (input == 8)
	{
	  printf ("%.2lf", cos (radian));
	}
      if (input == 9)
	{
	  printf ("%.2lf", tan (radian));
	}
    }
  else if (input == 10)
    {
      printf ("%d", x % y);
    }
  else if (input == 11)
    {
      printf ("%.1lf", pow (x, 2));
    }
  else if (input == 12)
    {
      printf ("%.1lf", pow (x, 3));
    }
  else if (input == 13)
    {
      printf ("%.1lf", sqrt (x));
    }
  else if (input == 14)
    {
      x = (double) x;
      printf ("%.1f", log (x));
    }
  else
    {
      printf ("Invalid Input! Please specify the correct number");
    }
}

int
main ()
{
  calc ();
  return 0;
}
