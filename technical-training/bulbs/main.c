/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a[100],b[100],i,j,c=0;
    printf("Hello World");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    b[i]=0;
    }
    for(i=0,j=0;i<n;i++,j++){
        if(a[i]!=b[i]){
        c++;
        for(int k=j;k<n;k++)
        if(b[k]==0)
        b[k]=1;
        else
        b[k]=0;
        }
    }
    printf("%d",c);

    return 0;
}
