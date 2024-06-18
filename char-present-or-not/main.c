/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char s[100],c;
    int i,j,k,l;
    scanf("%c",&c);
    scanf("%s",s);
    if(strchr(s,c))
    printf("%d",strchr(s,c));
    else
    printf("no");
    //printf("Hello World %ld",sizeof("function"));

    return 0;
}
