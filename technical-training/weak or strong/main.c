/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int
main ()
{
  int i, j, k;
  char a[100];
  scanf ("%s", a);
  for (i = 0; i < strlen (a) - 1; i++)
    if (a[i] == a[i + 1])
      {
	printf ("weak");
	return 0;
      }
  printf ("strong");

  return 0;
}

