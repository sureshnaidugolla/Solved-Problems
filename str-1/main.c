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
    int i,j,k,l,f=0;
    char s[100],s1[100];
    scanf("%s",s);
    strcpy(s1,s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='a' && f==0){
            i=i+1;
            while(s[i]!='a' && i<strlen(s)){
            s[i]=s[i]-1;
            i++;
            f=1;
            }
        }
        else if(s[i]!='a' && f==0){
            s[i]=s[i]-1;
        }
    }
    //printf("   %d   ",strcmp(s,s1));
    if(strcmp(s,s1)==0){
        s[strlen(s)-1]='z';
    }
    printf("%s",s);

    return 0;
}

