#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node {
    int data;
    Node *next;
};

Node *head;

Node *create_node(int item, Node *next)
{
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Error! Could Not Create A New Node.\n");
        exit(1);
    }

    new_node -> data = item;
    new_node -> next = next;

    return new_node;
}

Node *prepend(Node *head, int item)
{
    Node *new_node = create_node(item, head);
    return new_node;
}

Node *append(Node *head, int item)
{
    Node *new_node = create_node(item, NULL);
    if(head == NULL){
        return new_node;
    }

    Node *current_node = head;
    while(current_node -> next != NULL) {
        current_node = current_node -> next;
    }
    return head;
}

void Print_linked_list(Node * head)
{
    Node *current_node = head;
    while(current_node != NULL){
        printf("%d ", current_node -> data);
        current_node = current_node -> next;
    }
    printf("\n");
}

int main()
{
    Node *n1, *head;
    n1 = create_node(10, NULL);

    head = n1;
    Print_linked_list(head);

    head = prepend(head, 20);
    Print_linked_list(head);

    head = prepend(head, 30);
    Print_linked_list(head);

    return 0;
}
