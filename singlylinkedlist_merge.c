//All operations of singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *head=NULL, *temp,*newnode,*prevnode,*nextnode;
int choice=1,value;
//creation of node
void createnode()
{
    while(choice){
    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("No Memory Allocated!");
        return;
    }

    printf("Enter value:");
    scanf("%d",&value);
    newnode -> data = value;
    newnode -> next = NULL;

    if(head == NULL){
        head = temp = newnode;
    }else{
        temp->next = newnode;
        temp = newnode;
    }
    printf("Do you want to continue(0,1)?");
    scanf("%d",&choice);
}
}

//display of node
void displaynode(){
    if(head == NULL){
        printf("List is empty!!");
    }else{
        temp=head;
        printf("\nLinked list:\n");
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}

//insertion at beginnning
void insertbegin(){
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Memory Not Allocated!");
        return;
    }
    printf("Enter value:");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
}

//insert at end
void insertend(){
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Memory Not Allocated!");
        return;
    }
    printf("Enter value:");
    scanf("%d",&value);
    newnode -> data = value;
    newnode -> next = 0;

    if(head == NULL){
        head = temp = newnode;
    }else{
        temp=head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        temp = newnode;
    }
}

//insert at specific position
void insertatposition(){
    int pos;
    printf("\nEnter position at which a node to be inserted:");
    scanf("%d",&pos);
    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }

    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Memory Not Allocated!");
        return;
    }
    
    printf("Enter value:");
    scanf("%d",&value);
    newnode->data = value;
    newnode->next = NULL;

     // Insertion at beginning
    if (pos == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }
    temp=head;
    for(int i=1; i<pos-1 && temp!=NULL; i++){
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newnode);
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

//finding the length of linked list
int lengthoflist(){
    int count=0;
    temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

//deletion of node from beginning
void deletionbegin(){
    if (head == NULL) {
        printf("\nList is empty!");
        return;
    }

    temp = head;
    head = head-> next;
    free(temp);
}

//deletion of node from end
void deletionend(){
    if (head == NULL) {
        printf("\nList is empty!");
        return;
    }
    temp = head;
    // If only one node exists
    if (head->next == NULL) {
        head = NULL;
        free(temp);
        return;
    }
    //traverse to last node
    while(temp->next!=NULL){
        prevnode = temp;
        temp = temp->next;
    }
    prevnode->next = 0;
    free(temp);
}

//deletion from specific position
void deletionfromposition(){
    int pos, i;
    temp = head;
    printf("\nEnter Position from where you want to delete the node: ");
    scanf("%d",&pos);
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}

//reverse the linked list
void reverse(){
    struct node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while(nextnode!=0){
        nextnode = currentnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}
int main(){
    createnode();
    displaynode();

    printf("\nInsert at beginning:\n");
    insertbegin();
    displaynode();

    printf("\nInsert at end:\n");
    insertend();
    displaynode();

    printf("\nInsert at specific position:");
    insertatposition();
    displaynode();

    printf("\nLength of linked list: %d\n",lengthoflist());
    
    printf("\nDeletion from beginning:");
    deletionbegin();
    displaynode();
    
    printf("\nDeletion from end:");
    deletionend();
    displaynode();

    printf("\nDeletion from specific position:");
    deletionfromposition();
    displaynode();

    printf("\nReversed linked list:");
    reverse();
    displaynode();
    return 0;

}