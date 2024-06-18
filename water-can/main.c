/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,s=0,a[100],b[100],c[100],a1=0,t=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    a1=a[0];
    for(i=1;i<n;i++){
        if(a1<=a[i]){
            s=s+a1*f-t;
            a1=a[i];
            f=0;
            t=0;
        }
        else if(a1>a[i]){
            f++;
            t=t+a[i];
            a1=a[i];
        }
    }
    printf("\n%d",s);
    return 0;
}
