/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={10,20,30,40,50},s,c,v,i,j;
    printf("%d ",a[0]);
    for(i=1;i<5;i++){
        a[i]=((a[i-1]*i)+a[i])/(i+1);
        printf("%d ",a[i]);
    }

    return 0;
}
