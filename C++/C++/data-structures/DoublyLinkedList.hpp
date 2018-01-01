#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>

using std::cout;
using std::endl;

class DoublyLinkedList{
    struct Node {
        int key;
        int value;
        Node *prev;
        Node *next;
    };
    // private member
    private:
       Node *head;
       Node *tail;
       int length;
       Node* initNode(int, int);

    // public member
    public:
        // constructor
        DoublyLinkedList();
        int getLength();
        void prepend(int, int);
        void append(int, int);
        void traverse();
        void traverseInReverse();
        int search(int);
        int popValue();
        ~DoublyLinkedList();
};
#endif