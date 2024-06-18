/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,a[100][100],sr=0,sc=0,er,ec,m=0,n=4,c=1;
    scanf("%d%d",&m,&n);
    er=m-1;
    ec=n-1;
    while(c<=m*n){
       
        for(i=sc;i<=ec;i++){
            if(c>m*n)
            break;
            else
            a[sr][i]=c++;
        }
        sr++;
        for(j=sr;j<=er;j++){
            if(c>m*n)
            break;
            else
            a[j][ec]=c++;
        }
        ec--;
        for(k=ec;k>=sc;k--){
            if(c>m*n)
            break;
            else
            a[er][k]=c++;
        }
        er--;
        for(l=er;l>=sr;l--){
            if(c>m*n)
            break;
            else
            a[l][sc]=c++;
        }
        sc++;
    }
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    printf("%5d",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}


