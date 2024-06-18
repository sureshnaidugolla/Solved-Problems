/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int s,w,c,i,j,k;
    scanf("%d%d%d",&s,&w,&c); //enter number sentences words and chars
    char ***a;
    a=(int***)malloc(s*sizeof(int));
    a[]=(int**)malloc(w*sizeof(int));
    a[][]=(int*)malloc(c*sizeof(int));
     for(int i=0;i<s;i++){
    for(int j=0;j<w;j++){
        for(k=0;k<c;k++){
            scanf("%c",&a[i][j][k]);
        }
    }}
    for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
    printf("%c",a[0][i][j]);
    }
    printf(" ");
    }
    printf("\n");
    for(int j=0;j<2;j++){
    printf("%s ",a[0][j]);
    }
    printf("\n");
    printf("%s",a[1][1]);
    printf("\n");
    printf("%s",a[0][0]);
    return 0;
}
