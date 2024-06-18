/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    struct bitfield{
    unsigned a:5;
    unsigned c:5;
    unsigned b:6;
    char ch;
}bit;
    char *p;
    struct bitfield *ptr,bit1={1,3,3,'A'};
    ptr=&bit1;
    ptr++;
    ptr++;
    printf("%d\n",*ptr);
    //printf("%u",k);

    return 0;
}
