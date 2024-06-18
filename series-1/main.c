/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k=0,l,m,n;
    scanf("%d",&n);
    printf("%d\n",(n*(n+1))/2);
    for(i=1;i<=n;i++){
        k=k+i;
        printf("%d ",k);
    }

    return 0;
}
