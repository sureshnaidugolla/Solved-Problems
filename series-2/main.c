/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k=0,l,m,n;
    scanf("%d",&n);
    //printf("%d\n",(n*(n+1))/2);
    for(i=1;i<=n;i++){
        k=k+pow(i,i);
        printf("%d ",k);
    }

    return 0;
}
