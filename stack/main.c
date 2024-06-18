#include<stdio.h>
int s[100],top=0,range=3;
void push();
void pop();
void display();
int main(){
    int ch=1;
    while(ch){
    printf("\n1.Push\n2.Pop\n3.Display\nEnter your choice ");
    scanf("%d",&ch);
    switch(ch){
        case 1:push();
                break;
        case 2:pop();
                break;
        case 3:display();
                break;
        default: return 0;
                break;
    }
   }
}
void push(){
    int x;
    printf("\nEnter a number to push ");
    scanf("%d",&x);
    if(top>=range)
    printf("\n Stack is full ");
    else
    s[top++]=x;
}
void pop(){
    top=top-1;
}
void display(){
    for(int i=top-1;i>=0;i--)
    printf("\n%d --> %d",i,s[i]);
    
}


