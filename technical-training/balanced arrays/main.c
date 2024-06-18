/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[7]={1,2,8,10,10,12,19},x=5,i,j,f=-9999,c=9999,l;
    for(i=0;i<7;i++){
        if(a[i]>=x && (c-x)>(a[i]-x))
        c=a[i];
        if(a[i]<=x && (x-f)>(x-a[i]))
        f=a[i];
    }
    printf("%d %d",c,f );
    if((c-x)==(x-f))
    printf("balanced");
    else
    printf("unbalanced");

    return 0;
}
