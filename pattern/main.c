/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,m=5,n=6;
    if(m%2==0)
    n=m/2;
    else
    n=(m+1)/2;
    if(m%2==0){
    for(i=1;i<=n;i++){
        if(i%2==1){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=i;j<m;j++){
            printf("#");
        }
        printf("\n");
        }
        else{
            for(j=i;j<m;j++){
            printf("#");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        }
    }
    for(i=m/2;i>=1;i--){
        if(i%2==0){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=i;j<m;j++){
            printf("#");
        }
        printf("\n");
        }
        else{
            for(j=i;j<m;j++){
            printf("#");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        }
    }
    }
    else{
        for(i=1;i<=(m+1)/2;i++){
        if(i%2==0){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=i;j<m;j++){
            printf("#");
        }
        printf("\n");
        }
        else{
            for(j=i;j<m;j++){
            printf("#");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        }
    }
    for(i=m/2;i>=1;i--){
        if(i%2==0){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=i;j<m;j++){
            printf("#");
        }
        printf("\n");
        }
        else{
            for(j=i;j<m;j++){
            printf("#");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        }
    }
    }
    return 0;
}
