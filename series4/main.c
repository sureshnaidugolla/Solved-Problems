/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k=5,l=14,m=10,n,r=3;
    scanf("%d",&n);
    //printf("1 ");
    for(i=1;i<=n;i++){
        if(i%2==1){
        printf("%d ",k);
        k=k+l;
        l=l+8;
        }
        else{
        printf("%d ",r);
        r=r+m;
        m=m+8;
        }
    }


    return 0;
}
