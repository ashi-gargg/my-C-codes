#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head=NULL, *temp, *newnode;
    int choice=1;
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
        printf("Do you want to continue(0,1)?");
        scanf("%d",&choice);
    }
    temp=head;
    printf("Linked list before insertion at end:");
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }

    //node at end
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
}
    temp->next=newnode;

    //printing of linked list
    temp=head;

    printf("\nLinked list after insertion at end: ");

    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }

}