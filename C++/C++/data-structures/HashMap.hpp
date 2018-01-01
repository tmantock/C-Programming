#ifndef HASHMAP_H
#define HASHMAP_H

#include "DoublyLinkedList.hpp"

const int SIZE = 47;

class HashMap {
    private:
        DoublyLinkedList* hasharray[SIZE];
    public:
        HashMap();
        int hashFunction(int);
        void set(int, int);
        int get(int);
        ~HashMap();
};
#endif