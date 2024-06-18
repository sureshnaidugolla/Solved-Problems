/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

  int main ()
  {
    struct bitfield
    {
      //unsigned a:3;
      //char b;
      //unsigned c:5;
      int d:2;
      int d2:4;
      int d3:4;
      int d4:3;

    } bit={2,3,8,7};
    
    printf ("%d\n%d\n%d\n%d\n",bit.d,bit.d2,bit.d3,bit.d4);


    return 0;
  }
