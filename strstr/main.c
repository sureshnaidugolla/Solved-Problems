/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
char* strStr(char* str1, char str2) {
	int i = 0;
	for (; str1[i] != '\0'; i++) {
		if (str2 == str1[i])
			return &str1[i];
	}
	return NULL;
}
int main() {
    int k=0;
	char str1[100] = "", str2 = "";
	scanf("%s %c", str1, &str2);
	k = strStr(str1, str2)-str1;
	if(k)
	printf("\nThe position of %c in the string %s is %d", str2, str1, k+1);
	else
	printf("\n%c is not found string %s",str2,str1);
	return 0;
}
