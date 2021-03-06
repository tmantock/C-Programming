#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
    int data;
    struct node* next;
} node;

int get_length(struct node* head);
node* generate_node(int data);
void generate_list(node** headref, int length);
int free_nodes(struct node** headref);
node* get_nth(struct node* head, int n);
void append_node(struct node** headref, int data);

int main(void){
    /* 
    Changes:

    head is now dynamically allocated
    You cannot free memory that you do not control
    C has control of memory that is created by normal means
    The Developer has control of memory that is dynamically allocated

    */
    node *head = NULL;
    
    generate_list(&head, 10);

    node *ptr = head;

    free_nodes(&ptr);
}

node* generate_node(int data) {
    node *n = (node *) malloc(sizeof(node));
    n->data = data;
    n->next = NULL;

    return n;
}

void generate_list(node** headref, int length) {
    assert(length >= 0);

    if(*headref == NULL) {
        (*headref) = generate_node(90);
    }

    node *head = *headref;

    struct node* previous = head;

    while(length >= 0) {
        node *n = generate_node(length);
        previous->next = n;
        previous = n;

        length--;
    }
}

int get_length(struct node* head) {
    int length = 0;
    while(head != NULL) {
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

int free_nodes(struct node** headref) {
    assert(headref != NULL);

    struct node *head = *headref;
    struct node *next = NULL;

    while(head != NULL) {
        printf("Freeing %p \n", head);
        next = head->next;
        head->next = NULL;
        free(head);
        
        head = next;
    }

    /* All good */
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

void append_list(struct node** list_a, struct node** list_b) {
    assert(list_a != NULL && list_b != NULL);
    if(list_a == NULL) {
        *list_a = *list_b;
        *list_b = NULL;
        return;
    }

    struct node* head = *list_a;
    while(head != NULL) {
        head = head->next;
    }

    head->next = *list_b;
    *list_b = NULL;
}

struct node* reverse(struct node* list) {
    if(list == NULL || list->next == NULL) {
        return list;
    }

    struct node* curr = list->next;
    struct node* prev = list;
    prev->next = NULL;

    while(curr != NULL) {
        struct node* next = curr->next;

        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void delete_node(struct node* headref, int which) {
    
}
