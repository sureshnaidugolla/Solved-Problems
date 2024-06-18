/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int i,j,k,l,m,n=10;
    //for(i=0;i<5*2;i++)
    //printf("          ");
    //printf("*");
    for(i=0;i<n;i++){
        //printf("*");
        for(k=0;k<i;k++)
        printf("*");
        //for(j=i;j<n;j++)
        //printf(" ");
        for(j=i;j<n;j++)
        printf("  ");
        for(k=0;k<i;k++)
        printf("*");
        for(k=0;k<i;k++)
        printf("*");
        for(j=i;j<n;j++)
        printf("  ");
        for(k=0;k<i;k++)
        printf("*");
        printf("\n");
    }
    
    for(i=0;i<n;i++)
    printf("****");
    printf("\n");
    for(i=0;i<n/2;i++)
    printf("********");
    //printf("****");
    printf("\n");
    for(i=0;i<n/2;i++)
    printf("********");
    //printf("****");
    printf("\n");
    for(i=0;i<n;i++)
    printf("****");
    return 0;
}


