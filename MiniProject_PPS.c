/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int
calc ()
{
  int input;
  int x, y, i, fact;
  printf
    ("Enter what you want? \n+:1; \n -:2; \n *:3; \n /:4; \n !:5 \n pow:6 \n sin:7 \n cos:8 \n tan:9\n mod:10");
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
      printf ("%lf", pow (x, y));
    }
  else if (10 > input > 6)
    {
      double radian;
      radian = x * (M_PI / 180);
      if (input == 7)
	{
	  printf ("%lf", sin (radian));
	}
      if (input == 8)
	{
	  printf ("%lf", cos (radian));
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

  else
    {
      printf ("Invalid Input! Please specify the correct number");
      calc ();
    }
}

int
main ()
{
  calc ();
  return 0;
}
