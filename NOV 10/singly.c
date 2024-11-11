#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *head=NULL,*tail=NULL;
void create(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;

    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void insert_at_begin(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
    if(head==NULL){
        head=tail=newnode;

    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void insert_at_end(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    tail->next=newnode;
    tail=newnode;
    if(head==NULL){
        head=tail=newnode;

    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void delete_at_begin(){
    struct node*temp=head;
    head=head->next;
    free(temp);
}
void delete_at_end(){
    struct node*ptr=head;
    while(tail->next->next!=0){
        ptr=ptr->next;

    }
    tail=ptr;
    ptr=ptr->next;
    free(ptr);
    tail->next=NULL;
}


int main(){
     int choice;
    do{
        printf("enter the choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            insert_at_begin();
            break;
            case 2:
            insert_at_end();
            break;
            case 3:
            delete_at_begin();
            break;
            case 4:
            delete_at_end();
            break;
            default:
            printf("invalid");
            break;
        }
    }while(choice!=0);
}

