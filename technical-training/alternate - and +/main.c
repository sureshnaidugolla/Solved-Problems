/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int a[100]={9,4,-2,-1,5,0,-5,-3,2},j,i=0,c,k=0;
    for(j=0;j<9;j++){
    for(i=j;i<9;i++){
        if(a[i]>0 && a[i+1]>=0 && a[i+2]<0){
        c=a[i+2];
        a[i+2]=a[i+1];
        a[i+1]=c;
        }
        else if(a[i+1]>=0 && a[i]<0 && a[i+2]>0){
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c;
        }
    }
    /*for(i=j;i<9;i++){
        if(a[i]>0 && a[i+1]==0 && a[i+2]<0){
        c=a[i+2];
        a[i+2]=a[i+1];
        a[i+1]=c;
        }
        else if(a[i+1]==0 && a[i]<0 && a[i+2]>0){
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c;
        }
    }*/
    }
    for(i=0;i<9;i++)
    printf("%d ",a[i]);

    return 0;
}
