/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k=1,l=7,m=5,n;
    scanf("%d",&n);
    //printf("1 ");
    for(i=1;i<=n;i++){
        printf("%d ",k);
        k=k+m;
        m=m+l;
        l=l+3;
    }

    return 0;
}
