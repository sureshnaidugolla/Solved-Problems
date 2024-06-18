/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    int i=0,o=0,c=0,j=0;
    char str[100]="";
    scanf("%s",str);
    if(str[strlen(str)-1]=='(')
    printf("Not valid");
    else if(str[0]==')')
    printf("Not Valid");
    else{
    for(i=0;i<strlen(str);i++){
        if(str[i]=='(')
        o++;
        else if(str[i]==')')
        c++;
        if(c<o){
            printf("Not Valid");
            return 0;
        }
    }
    if(o==c)
    printf("Valid\nBrace pair count is %d",c);
    else
    printf("Not valid");
    }

    return 0;
}
