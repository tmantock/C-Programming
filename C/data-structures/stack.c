#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
    int data;
    struct node* next;
} node;

int pop(struct node **headref);
void delete_list(struct node **headref);
int main(void) {

}

int pop(struct node** headref) {
    assert(headref != NULL);

    if(*headref != NULL) {
        printf("Freeing %d", (*headref)->data);
        struct node* next = (*headref)->next;

        int data = (*headref)->data;
        (*headref)->next = NULL;
        free(*headref);

        *headref = next;

        return data;
    }

    assert(0);
}

void delete_list(struct node **headref) {
    assert(headref != NULL);

    struct node* head = *headref;
    struct node* next = NULL;

    while(head != NULL) {
        printf("Freeing %d", head->data);
        next = head->next;
        head->next = NULL;
        free(head);

        head = next;
    }
}

void insert_nth(struct node **headref, int data, int n) {
    assert(headref != NULL);
    assert(n >= 0);

    if(n == 0 || *headref == NULL) {
        struct node* headNode = create_node(data);
        headNode->next = *headref;
        *headref = headNode;
    }

    int index = 0;
    struct node* head = *headref;
    struct node* prev = *headref;

    while(prev != NULL && index < n) {
        prev->next = create_node(data);
        prev->next->next = head;
        index++;
    }

    if(prev != NULL) {
        prev->next = create_node(data);
        prev->next->next = head;
    }
}

void sorted_insert(struct node** headref, int data) {
    assert(headref != NULL);

    struct node* head = *headref;
    struct node* prev = *headref;

    while(head != NULL && data > head->data) {
        prev = head;
        head = head->next;
    }

    struct node* newNode = create_node(data);

    if(prev != NULL) {
        prev->next = newNode;
    } else {
        *headref = newNode;
    }

    newNode->next = head;
}