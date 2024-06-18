/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],a,b;
    int i,j,k,l,c;
    scanf("%s",s);
    a=s[0];
    b=s[1];
    for(i=0;i<strlen(s);i=i+2)
        if(a!=s[i])
        c=0;
        for(i=1;i<strlen(s);i=i+2)
        if(b!=s[i])
            l=0;
    if(l==0 && c==0)
    printf("yes");
    else
    printf("no");
    return 0;
}
