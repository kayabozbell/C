#include <stdio.h>
#include <stdlib.h>


//Linked List 
struct node{
    int data;
    struct node *next; 
};

//Head  & Tail
struct node *head = NULL;
struct node *tail = NULL;

// Add Node
int addNode(int data){

    //Linked list is empty
    if (head==NULL){
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data=data;
        new->next=NULL;

        head = tail = new; 
    }
    //Linked list's not empty
    else {
        struct node *new= (struct node *)malloc(sizeof(struct node));
        new->data= data;
        new->next= NULL;

        tail->next=new;
        tail=new;
    }

    return 1;
}

// Add Node to Head
int addNodeHead(int data){
    //Linked List is empty
    if(head == NULL){
        struct node *new=(struct node *)malloc(sizeof(struct node));
        new->data=data;
        new->next=NULL;

        head=tail=new;
    }
    //Linked is not empty
    else {
        struct node *new=(struct node*)malloc(sizeof(struct node));
        new->data= data;
        new->next=head;
        
        head=new;

    }


}

// Print
int print(){
    printf("Linked list: ");
    struct node *index = head;

    while (index !=NULL){
        printf("%d - ",index->data);
        index = index ->next;
    }
    printf("\n");
    return 1 ;
}

// Delete Node
int delete(int data){
    
    struct node *prev=NULL;
    struct node *index=head;

    //Linked list is empty
    if(head==NULL){
        printf("Linked list is empty!\n");
    }
    // Head
    if(head->data==data){
        struct node *t=head;
        head= head->next;
        free(t);
        return 1;
    } 
    while(index!=NULL && index->data!=data){
        prev = index;
        index = index->next;

    }

    if (index==NULL){
        printf("Data Not Found! \n");
        return 1;
    }

    prev->next = index->next;
    if(tail->data==data){
        tail= prev;
        return 1;
    }

    free(index);

    return 1;
}
int main(){
    addNode(10);
    addNode(18);
    addNode(16);
    addNode(19);
    addNodeHead(5);
    addNodeHead(27);
    addNodeHead(35);
    print();
    delete(35);
    print();
    delete(19);
    print();

    return 0; 
}   