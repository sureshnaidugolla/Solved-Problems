/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int a[100],n=5,i,j,k,c,tp;
    scanf("%d",&n);
    c=n;
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    a[i]=abs(a[i]);
    }
    for(i=0;i<n;i++){
        k=a[i];
        tp=0;
        for(j=0;j<n;j++){
            if(a[j]==k)
            tp++;
        }
        if(tp>1)
        c--;
    }
    if(c==n)
    printf("%d",c);
    else
    printf("%d",c+1);
    return 0;
}
