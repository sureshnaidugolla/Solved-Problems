/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,a[100],n,b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j])
            b[i]=b[i]+1;
        }
    }
    k=b[0];
    for(i=0;i<n;i++){
        if(k<b[i])
        k=b[i];
    }
    if(b[i]>=n/2)
    printf("majority element is true");
    return 0;
}
