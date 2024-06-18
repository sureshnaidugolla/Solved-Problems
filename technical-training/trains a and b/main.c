/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,oa=0,ob=0,ea=0,eb=0,a[3]={2,1,2},b[3]={3,2,1};
    for(i=0;i<3;i=i+2){
        oa=oa+a[i];
        ob=ob+b[i];
    }
    for(i=1;i<3;i=i+2){
        ea=ea+a[i];
        eb=eb+b[i];
    }
    if((oa+eb)>(ob+ea))
    printf("%d ",(ob+ea));
    else
    printf("%d ",(oa+eb));
    return 0;
}
