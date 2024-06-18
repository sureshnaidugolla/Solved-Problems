/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],b[100],n,i,j,k;
    printf("no of days ");
    scanf("%d",&n);
    scanf("%d",&k);
    a[0]=0;
    a[k+1]=0;
    for(i=1;i<k+1;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++){
    for(i=1;i<k+1;i++){
        if(a[i-1]!=a[i+1])
        b[i]=1;
        else
        b[i]=0;
    }
    for(int l=1;l<=k;l++)
    a[l]=b[l];
    }
    for(i=1;i<k+1;i++)
    printf("%d ",a[i]);
    return 0;
}
