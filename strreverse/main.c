/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    int i,j,k;
    char s1[100],s2[100];
    scanf("%s",s1);
    if(isalnum(s1))
    printf("Invalid string");
    else{
    printf("%s",strrev(s1));
        
    }
    for(i=0;i<10;i++)
    printf("\fWorld");

    return 0;
}

