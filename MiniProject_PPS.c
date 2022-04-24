#include <stdio.h>
#include <math.h>

int
calc ()
{
  int input;
  printf
    ("Enter what you want? \n+:1; \n -:2; \n *:3; \n /:4; \n !:5 \n pow:6 \n sin:7 \n cos:8 \n tan:9\n mod:10 \n sqr:11 \n cube:12 \n sqrt:13 \n ln:14 ");
    scanf("\n %d",&input);
    if(4>=input>=1){
        int x,y;
        printf("Enter the two numbers needed!");
        scanf("%d %d",&x,&y);
        
        if (input == 1)
        {
            printf("Adding \n");
            printf ("The result is: %d", x + y);
        }
        else if (input == 2)
        {
            printf("Subtracting \n");
            printf ("%d", x - y);
        }
        else if(input ==3){
            printf("Multiplying \n");
            printf("%d", x*y);
        }
        else if(input == 4){
            printf("Dividing \n");
            printf("%d",x/y);
        }
        
    }
  else if (input == 5)
    {
      int i = 1;
      int fact = 1;
      int x;
      printf("Enter Which Factorial you need to find:");
      scanf("%d",&x);
      while (i <= x)
	{
	  fact = i * fact;
	  i++;
	}
      printf ("\n %d", fact);
    }
  else if (input == 6){
    int x,y;
    printf("Enter Base and Exponent:");
    scanf("%d %d",&x,&y);
    printf ("\n %.1lf", pow (x, y));
    }
    else if (6<input<10)
        {
          double radian;
          int x;
          printf("Enter degree: ");
          scanf("%d",&x);
          radian = x * (M_PI / 180);
          if (input == 7)
    	{
    	  printf ("\n %.2lf", sin (radian));
    	}
          if (input == 8)
    	{
    	  printf ("\n %.2lf", cos (radian));
    	}
          if (input == 9)
    	{
    	  printf ("\n %.2lf", tan (radian));
    	}
    }
  else if (input == 10)
    {
        int x,y;
        printf("Enter two numbers req for modulus:");
        scanf("%d %d",&x,&y);
        printf("Modulus result is on the way");
        printf ("\n %d", x % y);
    }
  else if (input == 11)
    {
        int x;
        printf("Enter the base for squaring:");
        scanf("%d",&x);
        printf("Squaring");
      printf ("\n %.1lf", pow (x, 2));
    }
  else if (input == 12)
    {
          int x;
          printf("Enter the base for cubing");
        scanf("%d",&x);
        printf("cubing");
      printf ("\n %.1lf", pow (x, 3));
    }
  else if (input == 13)
    {
        int x;
        printf("Enter the number to find square root of");
        scanf("%d",&x);
        printf("Finding Square Root");
      printf (" \n %.1lf", sqrt (x));
    }
  else if (input == 14)
    {
      double x;
      printf("Enter the number to find log of:");
      scanf("%lf",&x);
      printf (" \n %.1f", log (x));
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

