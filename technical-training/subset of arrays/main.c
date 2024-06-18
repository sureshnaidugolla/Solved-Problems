/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a1[6]={11,1,13,21,3,7},a2[5]={11,3,7,5,1},i,j,f;
    for(i=0;i<5;i++)
    for(j=0;j<6;j++)
    if(a2[i]!=a1[j])
    f++;
    if(f==0)
    printf("yes");
    else
    printf("no");
    return 0;
}
