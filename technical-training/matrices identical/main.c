/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r1,r2,c1,c2,i,j,f,a[100][100],b[100][100];
    scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);    
        }
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
        scanf("%d",&b[i][j]);    
        }
    }
    if(r1>=1 & r2>=1 & c1>=1 & c2>=1 & r1==r2 & c1==c2){
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
            if(a[i][j]!=b[i][j]){
                printf("not identical");
                return 0;
        }
    }
    }
    else
    printf("-1");
    printf("identical");

    return 0;
}
