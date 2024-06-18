/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//two friends solve problems as 0 or 1 we need to find  wwhileQETHER THEY SOLVED ALL The problemsBLEMs

#include <stdio.h>

int main()
{
    int n,a[3],c=0,l,i,j;
    scanf("%d",&n);
    while(n>0){
        l=0;
        for(i=0;i<3;i++){
        scanf("%d",&a[i]);
        if(a[i]==1)
        l++;
        }
        if(l>=2)
        c++;
        n--;
    }
    printf("%d",c); //or l%3+1

    return 0;
}

