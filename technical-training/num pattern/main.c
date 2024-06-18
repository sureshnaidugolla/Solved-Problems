/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,c=0,s=0;
    for(i=1;i<=6;i++){
        s=s+i;
        if(i%2==1){
        for(j=1;j<=i;j++){
            c++;
            if(j==i)
           printf("%d",c);
           else
           printf("%dx",c);
            }
            printf("\n");
        }
        else{
        c=s;
        for(j=1;j<=i;j++){
            if(j==i)
           printf("%d",c);
           else
           printf("%dx",c);
           c--;
       }
       printf("\n");
        }
        c=s;
    }
 
    return 0;
}


