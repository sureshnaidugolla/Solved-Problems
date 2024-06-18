/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a[100],i,j,ro=0,ra=0,ros=0,ras=0,s=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    i=0;
    j=n-1;
   // if(n%2==0)
    //t=a[n/2];
    while(1){
        if(ras>ros){
            j=j-1;
            ro=ro+1;
            ros=a[j]+ros;
            
        }
        else if(ras<ros){
            i=i+1;
            ra=ra+1;
            ras=a[i]+ras;
        }
        else{
            ras=a[i]+ras;
            ros=a[j]+ros;
            i=i+1;
            j=j-1;
            ro=ro+1;
            ra=ra+1;
        }
        if((ras+ros)==s){
        break;
        }
    }
    printf("%d %d",ro,ra);

    return 0;
}
