/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,n[100],i=0,j=0,s,c=0;
    scanf("%d%d",&a,&b);
    while(a>0 || b>0){
        i=(a+b);
        if(j==0){
            n[j]=i%10;
            c=i/10;
        }
        else{
            n[j]=(n[j]+c)%10;
            c=n[j]/10;
        }
        
        a=a/10;
        b=b/10;
        j++;
    }
    for(i=j-1;i>=0;i--)
    printf("%d",n[i]);
    return 0;
}
