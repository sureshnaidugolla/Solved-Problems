/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={2,4,8,6,2},b[5],x=2,i,j,s,v,c;
    for(i=0;i<5;i++){
        c=0;
        s=a[i]+x;
        v=s/2;
        for(j=0;j<5;j++)
        if(a[j]==v)
        c++;
        b[i]=c;
    }
    for(i=0;i<5;i++)
    printf("%d ",b[i]);
    return 0;
}
