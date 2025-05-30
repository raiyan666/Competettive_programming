#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node Node;
struct node{
    int data;
    Node *next;
    Node *prev;
};
Node *create_node(int item,Node *next,Node *prev){
    Node *new_node=(Node *)malloc(sizeof(Node));
    if(new_node==0){
        printf("Error! cOuld not create node");
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    new_node->prev=prev;
    return new_node;
}
Node *prepend(Node *head,int item){
    Node *new_node=create_node(item,head,0);
    new_node->next->prev=new_node;
    return new_node;
}
Node *append(Node *head,int item){
    Node *new_node=create_node( item,0,0);
    if(head==0){
        return new_node;
    }
    Node *current_node = head;
    while(current_node->next != NULL){
        current_node=current_node->next;
    }
    current_node->next=new_node;
    new_node->prev=current_node;
    return head;
}
