/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,j=0,k,l,m,n,s1[100];
    char s[100];
    //printf("1");
    scanf("%s",s);
    //printf("%s",s);
    for(i=0;i<strlen(s);i=i+2){
        //printf("atoi");
        s1[j++]=s[i]-'0';
    }
    for(i=0;i<j;i++){
        for(k=0;k<j;k++){
            if(s1[i]<s1[k]){
                l=s1[i];
                s1[i]=s1[k];
                s1[k]=l;
            }
        }
    }
    //printf("hi");
    k=1;
    for(i=0;i<j;i++){
        if(k>=strlen(s)){
        printf("%d",s1[i]);
        break;
        }
        else{
        printf("%d%c",s1[i],s[k]);
        k=k+2;
        }
    }
    return 0;
}
