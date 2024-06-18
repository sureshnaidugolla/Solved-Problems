/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l;
    char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        for(j=0;j<strlen(s);j++){
        for(k=i;k<=j;k++)
            printf("%c",s[k]);
        printf("\n");
        }
    }
    return 0;
}

