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
    char s[100],s2[100];
    int i,j,k,l,c=0;
    scanf("%s",s);
    scanf("%s",s2);
    for(i=0;i<strlen(s2);i++){
        for(j=0;j<strlen(s);j++){
            if(s2[i]==s[j]){
            c++;
            break;
            }
        }
    }
    if(c==strlen(s2))
    printf("yes");
    else
    printf("no");

    return 0;
}

