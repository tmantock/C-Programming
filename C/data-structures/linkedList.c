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
node* get_nth(struct node* head, int n);

int main(void){
    node head;
    head.data = 5;
    head.next = NULL;

    generate_nodes(&head, 6);

    int length = get_length(head.next);

    node *n = get_nth(&head, 3);

    printf("Node 3: %p\n", n);

    printf("%d\n", length);

    free_nodes(&head);

    // int l = get_length(&head);

    // printf("%d\n", l);
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
        printf("Data %d: %p\n", length, head);
        length++;
        head = head->next;
    }

    return length;
}

node* get_nth(struct node* head, int n) {
    if(n < 0) {
        return NULL;
    }

    if(get_length(head) < n) {
        return NULL;
    }
    
    int c = 0;
    while(head->next != NULL && c < n) {
        c++;
        head = head->next;
    }

    return head;
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

void append_node(struct node** headref, int data) {
    assert(headref != NULL);

    if(*headref == NULL) {
        *headref = (struct node*)malloc(sizeof(struct node));
        (*headref)->data = data;
        (*headref)->next = NULL;
        return;
    }

    struct node* head = *headref;
    while(head->next != NULL) {
        head = head->next;
    }

    head->next = (struct node*)malloc(sizeof(struct node));
    head->next->data = data;
    head->next->next = NULL;
}