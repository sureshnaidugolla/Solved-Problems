/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Employ{
    char name[20];
    char uid[10];
    float salary;
    struct Employ *p;
};

int main()
{
   struct Employ s={"suresh","17121a0565",30000.0};
    printf("%s %s %0.2f",s.name,s.uid,s.salary);
    printf("%ld",sizeof(s));
    

    return 0;
}

