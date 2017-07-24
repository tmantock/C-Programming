#include "DoublyLinkedList.hpp"

// constructor
DoublyLinkedList::DoublyLinkedList(){
    head = NULL;
    tail = NULL;
    length = 0;
}

DoublyLinkedList::Node* DoublyLinkedList::initNode(int data) {
    Node *n = new Node();
    n->data = data;
    n->prev = NULL;
    n->next = NULL;

    return n;
}

int DoublyLinkedList::getLength() {
    return length;
}

void DoublyLinkedList::prepend(int val){
    Node *n = initNode(val);

    if(head == NULL) {
        head = n;
        return;
    }

    head->prev = n;
    n->next = head;

    if(tail == NULL) {
        tail = head;
    }

    head = n;
    length++;
}

void DoublyLinkedList::append(int val) {
    length++;

    Node *n = initNode(val);

    if(head == NULL) {
        head = n;
        return;
    }

    Node *node = head;

    while(node->next != NULL) {
        node = node->next;
    }

    n->prev = node;
    node->next = n;

    tail = n;
}

void DoublyLinkedList::traverse() {
    if(head == NULL) {
        return;
    }

    Node *node = head;

    while(node != NULL) {
        cout << node->data << endl;
        node = node->next;
    }
}

void DoublyLinkedList::traverseInReverse() {
    if(tail == NULL) {
        return;
    }

    Node *node = tail;
    while(node != NULL) {
        cout << node->data << endl;
        node = node->prev;
    }
}

int DoublyLinkedList::popValue(){
    Node *n = head;
    int ret = n->data;

    head = head->next;
    delete n;
    return ret;
}

DoublyLinkedList::~DoublyLinkedList() {
    if(head == NULL) {
        return;
    }

    Node *node = head;
    while(node != NULL) {
        Node *next = node->next;
        cout << "Deleting " << node << endl;
        delete node;
        node = next;
    }
}