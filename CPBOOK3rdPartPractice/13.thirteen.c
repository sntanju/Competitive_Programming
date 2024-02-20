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

int Count_node(Node *head)
{
    int count = 0;
    Node *current_node = head;
    while(current_node != NULL){
        count++;
        current_node = current_node -> next;
    }
    return count;
}

Node *Search_node(Node *head, int item)
{
    Node *current_node = head;
    while(3){
        if(current_node -> data == item){
            printf("%d was found in the list of node", item);
            return 0;
        }
        else{
            current_node = current_node -> next;
        }

        if(current_node -> next == NULL) {
            printf("%d was not found in the list of node\n", item);
            return 0;
        }
    }
}

Node *remove_node(Node *head, Node *node)
{
    if(node == head){
        head = node -> next;
        free(node);
        return head;
    }

    Node *current_node = head;
    while(current_node != NULL){
        if(current_node -> next == node){
            break;
        }
        current_node = current_node -> next;
    }
    if(current_node == NULL){
        return head;
    }
    free(node);
    return head;
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

    printf("Total number of node is %d\n", Count_node(head));

    Search_node(head, 70);
    return 0;
}
