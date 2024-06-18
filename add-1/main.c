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
    int a[100],n,i,j,k,c,s,tp;
    scanf("%d",&n);
    c=n;
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=n;i>0;i--)
        s=s+a[i]*(pow(i,10));
        s=s+1;
        printf("%d",s);
        n=i;
    while(s>0){
        a[i--]=s%10;
        s=s/10;
    }
    for(i=0;i<=n;i++){
    printf("%d ",a[i]);
    }
    return 0;
}
