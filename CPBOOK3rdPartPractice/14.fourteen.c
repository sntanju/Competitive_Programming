#include<stdio.h>


typedef struct node Node;

struct node {

    int data;
    Node *left;
    Node *right;

};

Node *create_node(int item)
{
    Node *new_node = (Node *) malloc(sizeof(Node));

    if(new_node == NULL) {
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }

    new_node -> data = item;
    new_node -> left = NULL;
    new_node -> right = NULL;

    return new_node;
}

void add_left_child(Node *node, Node *child)
{
    node -> left = child;
}

void add_right_child(Node *node, Node *child)
{
    node -> right = child;
}

Node *create_tree()
{
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child(two, seven);
    add_right_child(two, nine);

    Node *one = create_node(1);
    Node *six = create_node(6);
    add_left_child(seven,two);
    add_right_child(seven, six);

    Node *five = create_node(5);
    Node *ten = create_node(10);
    add_left_child(six, five);
    add_right_child(six, ten);

    Node *eight = create_node(8);
    add_right_child(nine, eight);

    Node *three = create_node(3);
    Node *four = create_node(4);
    add_left_child(eight, three);
    add_right_child(eight, four);

    return two;

}

int main()
{
    Node *root = create_tree();
    printf("%d\n", root -> data);

    return 0;
}
