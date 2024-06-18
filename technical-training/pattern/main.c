/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<i;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("*");
        printf("\n");
    }

    return 0;
}
