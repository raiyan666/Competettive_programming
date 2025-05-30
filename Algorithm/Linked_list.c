typedef struct node Node;
struct node{
    int data;
    struct node *next;
};
Node *create_node(int item,Node *next){
    Node *new_node=(Node*)malloc(sizeof(Node));
    if(new_node==0){
        printf("Error!Could not create a new node\n");
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    return new_node;
}
Node *prepend(Node *head,int item){
    Node *new_node=create_node(item,head);
    return new_node;
}
Node *append(Node *head,int item){
    Node *new_node=create_node(item,0);
    if(head==0){
        return new_node;
    }
    Node *current_node=head;
    while(current_node->next!=0){
        current_node=current_node->next;
    }
    current_node->next=new_node;
    return head;
}
void print_linked_list(Node *head){
    Node *current_node=head;
    while(current_node->next!=0){
        printf("%d ",current_node->data);
        current_node=current_node->next;
    }
    printf('\n');
}
int main(){
    Node *n1,*n2,*head,*n3;
    n1=create_node(10,0);
    head=n1;
    head=prepend(head,20);
    //n2=head;
    //printf("data = %d\n",n2->data);
    n3=n2->next;
    //printf("data = %d\n",n3->data);
    print_linked_list(head);
    head=append(head,30);
    print_linked_list(head);
    return 0;
}

