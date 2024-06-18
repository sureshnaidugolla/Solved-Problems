#include<stdio.h>
int a[100],range=50,fr=-1,rr=-1;
void insert(){
    int x;
    printf("\nenter an element to insert ");
    scanf("%d",&x);
    if(rr>=range)
    printf("\nQueue is overflow");
    else{
     a[++rr]=x;
    }
}
void delete(){
    if(fr>=rr)
    printf("\nQueue is empty");
    else
    fr++;
}
void display(){
    if(fr<rr){
        for(int i=fr+1;i<=rr;i++){
            printf("%d<----",a[i]);
        }
    }
    else
    printf("\nQueue is empty ");
}
int main(){
    int ch;
    while(1){
        printf("\n1.Insert\n2.Delete\n3.Display ");
        scanf("%d",&ch);
        switch(ch){
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            default: return 0;
        }
    }
}