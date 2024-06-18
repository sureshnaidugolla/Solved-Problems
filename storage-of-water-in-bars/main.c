/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int min(int x,int y){
    if(x>y)
    return y;
    else
    return x;
}
int main()
{
   int i,n,s=0,a[100],b[100],c[100],a1=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    a1=a[0];
    for(i=0;i<n;i++){
        if(a1>=a[i]){
            b[i]=a1;
        }
        else{
            b[i]=a[i];
            a1=a[i];
        }
    }
    a1=a[n-1];
    for(i=n-1;i>=0;i--){
        if(a1>=a[i]){
            c[i]=a1;
        }
        else{
            c[i]=a[i];
            a1=a[i];
        }
    }
    for(i=0;i<n;i++){
        t=min(b[i],c[i]);
        if(t>a[i])
            s=s+t-a[i];
        else
        s=s+a[i]-t;
    }
    printf("\n%d\n",s);
    for(i=0;i<n;i++){
        printf("%d %d\n",b[i],c[i]);
    }
    return 0;
}
