#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>

using std::cout;
using std::endl;

class DoublyLinkedList{
    struct Node {
        int data;
        Node *prev;
        Node *next;
    };
    // private member
    private:
       Node *head;
       Node *tail;
       int length;

    // public member
    public:
        // constructor
        DoublyLinkedList();
        int getLength();
        void prepend(int val);
        void append(int val);
        void traverse();
        void traverseInReverse();
        int popValue();
        ~DoublyLinkedList();
};
#endif