#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

int get_length(struct node* head);
node* generate_node(struct node* head);
int generate_nodes(struct node* last, int length);
int free_nodes(struct node* n);

int main(void){
    node head;
    head.data = 5;
    head.next = NULL;

    generate_nodes(&head, 6);

    int length = get_length(head.next);

    printf("%d\n", length);

    free_nodes(&head);

    int l = get_length(&head);

    printf("%d\n", l);
}

node* generate_node(struct node* previous) {
    node *n = (node *) malloc(sizeof(node));
    n->data = 5;
    n->next = NULL;

    previous->next = n;

    return n;
}

int generate_nodes(struct node* last, int length) {
    if(last == NULL) {
        // Error Code 1
        return 1;
    }

    if(length == 0) {
        // Exit out of function. No new nodes for list
        return 0;
    }

    struct node* previous = last;

    while(length >= 0) {
        node *n = generate_node(previous);
        previous = n;

        length--;
    }

    // All good
    return 0;
}

int get_length(struct node* head) {
    int length = 0;
    while(head != NULL) {
        printf("Data: %d\n", head->data);
        length++;
        head = head->next;
    }

    return length;
}

int free_nodes(struct node* n) {
    if(n == NULL) {
        // Cannot remove null
        return 1;
    }

    struct node* current = n->next;
    struct node* next;

    while(current->next != NULL) {
        next = current->next;
        current->next = NULL;
        free(current);
        current = next;
    }

    current->next = NULL;
    free(current);

    n->next = NULL;

    // All good
    return 0;
}