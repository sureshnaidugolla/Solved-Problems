/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int i, j, k, l, c, n;
  char s[100];
  scanf ("%d", &n);
  if (n >= 11)
    {
      scanf ("%s", s);
      if (s[0] == '8'){
	printf ("Yes");
      }
      else
	{
	  for (i = 0; i < n; i++)
	    {
	      if (s[i] == '8')
		if (n - i + 1 >= 11)
		  c = 1;

	    }
	  if (c == 1)
	    printf ("Yes");
	  else
	    printf ("No");
	}
    }
  else
    {
      printf ("No");
    }

  return 0;
}
