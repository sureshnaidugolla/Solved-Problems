/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct sl{
    int data;
    struct sl *next;
};
struct sl* create(struct sl*start){
    int d =0 ,i = 0,n = 0;
    struct sl* node,*s;
    s=(struct sl*)malloc(sizeof(struct sl));
    s=start;
    //s->next=NULL;
    while(s->next!=NULL)
    s=s->next;
    printf("enter the number of nodes to be created or pushed :  ");
    scanf("%i",&n);
    for(i=0;i<n;i++){
        node=(struct sl*)malloc(sizeof(struct sl));
        node->next = NULL;
        printf("Enter the %d data of node : ",i+1);
        scanf("%d",&d);
        s->data=d;
        s->next=node;
        s=s->next;
        s->next=NULL;
    }
    return start;
}


void display(struct sl* start){
    struct sl *temp ;
    temp=start;
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


void delAtPos(struct sl* start){
    int p,i;
    struct sl* temp;
    temp=start;
    printf("Enter the Item position : ");
    scanf("%d",&p);
    for(i=0;i<p-1;i++){
        temp=temp->next;
    }
    if(temp->next==NULL && temp->next->next==NULL){
    printf("\nGiven position is exceeds the range of list ");
    return;
    }
    temp=temp->next->next;
    free(temp);
}

struct sl* delete(struct sl* start){
    int ch;
    struct sl* temp,*temp2;
    temp=start;
    printf("\n***** Item Position To Delete *****\n1.Start\n2.End\n3.At Specified Position\nEnter Your Choice :  ");
    scanf("%d",&ch);
    switch(ch){
        case 1:start=temp->next;
        free(temp);
        break;
        case 2:while(temp->next!=NULL){
            temp2=temp;
                temp=temp->next;
        }
                temp2->next=NULL;
                free(temp);
        break;
        case 3:delAtPos(start);
        break;
    }
    return start;
}


struct sl* reversOrder(struct sl* start){
    struct sl *temp;
}


int main()
{
    int ch;
    struct sl *s;
    s=(struct sl*)malloc(sizeof(struct sl));
    s->next=NULL;
    while(1){
    printf("\n***** Single Linked List Operations *****\n1.Create\n2.Delete\n3.Display\n4.Exit\nEnter Your Choice :  ");
    scanf("%d",&ch);
    switch(ch){
        case 1:s=create(s);
        break;
        case 2:s=delete(s);
        break;
        case 3:display(s);
        break;
        case 4:return 0;
        break;
    }
    }

    return 0;
}

