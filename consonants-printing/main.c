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
   int i,j=0,k;
   char a[100],b[100];
   scanf("%[^\n]s",a); //we can use gets()
   for(i=0;i<strlen(a);i++){
       if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
       continue;
       else
       b[j++]=a[i];
   }
   b[j]='\0';
    printf("\n%s ",b);
    return 0;
}

