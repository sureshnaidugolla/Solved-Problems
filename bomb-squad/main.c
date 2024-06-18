/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,c;
    char s[100][100];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%s",s[i]);
            
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(s[i][j]=='.'){
            c=0;
            if(s[i][j-1]=='*')
            c++;
            if(s[i][j+1]=='*')
            c++;
            if(s[i-1][j-1]=='*')
            c++;
            if(s[i-1][j]=='*')
            c++;
            if(s[i+1][j-1]=='*')
            c++;
            if(s[i-1][j+1]=='*')
            c++;
            if(s[i+1][j+1]=='*')
            c++;
            if(s[i+1][j]=='*')
            c++;
            printf("%d",c);
            }
            else
            printf("%c",s[i][j]);
        }
    }

    return 0;
}

