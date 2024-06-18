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
   int i,j=0,k,b[100];
   char a[100];
   scanf("%[^\n]s",a); //we can use gets()
   for(i=0;i<strlen(a);i++){
       b[i]=0;
       for(j=0;j<strlen(a);j++)
       if(a[i]==a[j])
       b[i]++;
   }
   for(i=0;i<strlen(a);i++){
       if(b[i]!=0){
       printf("%c",a[i]);
       for(j=0;j<strlen(a);j++)
       if(a[i]==a[j])
       b[j]=0;
       }
   }
    
    return 0;
}


