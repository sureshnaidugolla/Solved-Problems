#include<stdio.h>
#include<string.h>
int main(){
    char s[100],i=0,s2[100];
    //gets(s);
    scanf("%[^\n]",&s);
    s2[i]=s[i]-'a'+'A';
    i++;
    while(s[i]!='\0'){
        if(s[i-1]==' '){
            s2[i]=s[i]-'a'+'A';
        }
        else{
            s2[i]=s[i];
        }
        i++;
    }
    s2[i]='\0';
    printf("%s",s2);
    return 0;
}