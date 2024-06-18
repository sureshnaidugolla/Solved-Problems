/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main()
{
    int k,i=1,a,b,r,s,at,cr=0;
    float p;
    char ch[5]={'+','-','*','/','%'},c;
    srand(time(NULL));
    while(i<=5){
        at=1;
        a=rand()%10;
        b=rand()%10;
        c=ch[rand()%5];
        switch(c){
            case '+':r=a+b;
            break;
            case '-':r=a-b;
            break;
            case '*':r=a*b;
            break;
            case '/':r=a/b;
            break;
            case '%':r=a%b;
            break;
        }
        printf("\n%d %c %d = ",a,c,b);
        scanf("%d",&s);
        while(r!=s){
            printf("\nWrong answer");
            switch(at){
                case 1: printf("\nGive correct answer ");
                break;
                case 2: printf("\nTray again ");
                break;
                case 3: printf("\nBetter luck next time ");
                break;
                default: printf("\nOne more try ");
                break;
        }
            scanf("%d",&s);
            at++;
        }
        switch(at){
            case 1: printf("\nExcellent");
            cr++;
            break;
            case 2: printf("\nVery good");
            cr++;
            break;
            case 3: printf("\nGood");
            cr++;
            break;
            default: printf("\nBetter");
            cr++;
            break;
        }
        i++;
    }
    printf("\n%d\n",cr);
    p=(cr/at)*10;
    printf("\n***** The total percentage is %0.2f%%",p);

    return 0;
}
 