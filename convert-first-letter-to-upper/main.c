/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
   int i,j,k;
   char a[100];
   scanf("%[^\n]s",a); //we can use gets()
   for(i=0;i<strlen(a);i++){
       if(i==0 && (a[i]>='a' & a[i]<='z'))
       a[i]=a[i]-32;
       else{
       if(a[i-1]==' ')
       a[i]=a[i]-32;
       }
   }
    printf(" %s ",a);
    return 0;
}
