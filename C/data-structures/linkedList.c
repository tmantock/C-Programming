#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

int get_length(struct node* head);
node* generate_node(struct node* head);

int main(void){
    node head;
    head.data = 5;
    head.next = NULL;

    node *next = generate_node(&head);
    node *again = generate_node(next);
    int length = get_length(head.next);

    printf("%d\n", length);

    free(next);
    free(again);
}

node* generate_node(struct node* previous) {
    node *n = (node *) malloc(sizeof(node));
    n->data = 5;
    n->next = NULL;

    previous->next = n;

    return n;
}

int get_length(struct node* head) {
    int length = 0;
    while(head != NULL) {
        length++;
        head = head->next;
    }

    return length;
}