#include<stdio.h>
#include<string.h>
int main(){
    char s[100],s2[100],s3[100],i=0,r[100],j=0,k=0,t=0;
    printf("enter a string ");
    scanf("%S",&s);
    printf("enter a string ");
    scanf("%S",&s2);
    printf("enter a string ");
    scanf("%S",&s3);
    while(s[i]!='\0'){
        if(s2[0]==s[i] && s2[1]==s[i+1]){
            printf("%d",i);
            break;
        }
        i++;
    }
    //printf("%d",i);
    while(s[j]!='\0'){
        printf("%c ",s[j]);
        if(j==i){
            while(s3[k]!='\0'){
                r[t++]=s3[k++];
            }
            j=j+strlen(s2);
        }
        else{
            r[t++]=s[j++];
        }
    }
    r[t]='\0';
    printf(" %s ",r);
    return 0;
}