/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void
printBin (int n)
{
  if (n == 0)
    return ;
    printBin (n / 2);
  printf ("%d", n % 2);
}

int
main ()//int args, char *a[])
{
  int n =5; //atoi (a[1]);
  printBin(n);

  return 0;
}
