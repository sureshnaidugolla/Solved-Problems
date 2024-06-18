/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[4]={9,7,5,3},i,j,k=2,l,c,flag;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if((a[i]+a[j])%2!=0){
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    printf("true");
    else
    printf("false");

    return 0;
}

