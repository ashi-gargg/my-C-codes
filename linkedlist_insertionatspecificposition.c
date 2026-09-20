#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head=NULL, *temp, *newnode;
    int pos,count=0,i=1,choice=1;
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0){
            temp=head=newnode;
        }else{
            temp->next=newnode;
            temp=newnode;
        }
        count++;
        printf("Do you want to continue(0,1)?");
        scanf("%d",&choice);
    }
    temp=head;
    printf("Linked list after insertion at specific position:");
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }

    //insertion at specific position
    printf("\nEnter position:");
    scanf("%d",&pos);

    if (pos>count){
        printf("Invalid position");
    }else{
        temp=head;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted:");
    scanf("%d",&newnode->data);
    newnode->next = temp->next;
    temp->next=newnode;

    //printing linked list
    temp=head;
    printf("Linked list after insertion at specific position:");
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}