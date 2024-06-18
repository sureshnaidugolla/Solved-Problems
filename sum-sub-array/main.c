/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,s=0,a[100][100],x1,x2,y1,y2;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    for(i=x1-1;i<=x2-1;i++){
        for(j=y-1;j<=y2-1;j++){
            s=s+a[i][j];
        }
    }
    printf("\n%d",s);
    return 0;
}
