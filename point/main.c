#include<stdio.h>
struct stack{
    int s[100];
    int top;
};
void init(struct stack *t){
    t->top=-1;
}
void push(struct stack *st){
    int x;
    printf("\nenter an element to push ");
    scanf("%d",&x);
    if(st->top+1>=50)
    printf("\n Stack is full ");
    else
    st->s[++st->top]=x;
    
}
void pop(struct stack *st){
    st->top--;
}
void display(struct stack *st){
    for(int i=st->top;i>=0;i--)
    printf("\n%d-----%d",i,st->s[i]);
}
int main(){
    struct stack s;
    int ch;
    init( &s);
    while(1){
        printf("\n1.Push\n2.Pop\n3.Display ");
        scanf("%d",&ch);
        switch(ch){
            case 1: push(&s);
            break;
            case 2: pop(&s);
            break;
            case 3: display(&s);
            break;
            default: return 0;
        }
    }
    
}