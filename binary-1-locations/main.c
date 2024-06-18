/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i=0,j,a[100];
    scanf("%d",&n);
    while(n>=1){
        a[i++]=n%2;
        n=n/2;
    }
    for(j=i-1;j>=0;j--){
        if(a[j]==1)
        printf("%d",i-j);
    }
    return 0;
}
