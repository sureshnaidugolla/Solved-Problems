/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,m=10;
    
    for(i=1;i<=m;i++){
        for(j=i;j<=m;j++){
            printf(" ");
        }
        for(j=1;j<i;j++){
            printf("#");
        }
        for(j=1;j<i;j++){
            printf("#");
        }
        printf("\n");
    }
    for(i=1;i<=m;i++){
        for(j=i;j<=m;j++){
            printf("#");
        }
        for(j=1;j<i;j++){
            printf(" ");
        }
        
        /*for(j=1;j<i;j++){
            printf("*");
        }
        for(j=1;j<i;j++){
            printf("*");
        }*/
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=i;j<=m;j++){
            printf("#");
        }
        //for(k=j;k<6;k++){
          //  printf("%");
        //}
        printf("\n");
    }
    for(k=0;k<m*2;k++){
          printf("%%");
        }
        printf("\n");
        for(k=0;k<m*2;k++){
          printf("%%");
        }

    return 0;
}

