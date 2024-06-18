/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
   int i,j,k=1,l=2,m=13,n,r=13;
    scanf("%d",&n);
    //printf("1 ");
    for(i=1;i<=n;i++){
        if(i%2==1){
        printf("%d ",k);
        k=pow(l,3);
        l=l+1;
        }
        else{
        printf("%d ",r);
        r=r+13;
        //m=m+8;
        }
    }

    return 0;
}
