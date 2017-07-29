#include "HashMap.hpp"

HashMap::HashMap() {
    for(int i = 0; i < SIZE; i++) {
        hasharray[i] = new DoublyLinkedList();
    }
}

int HashMap::hashFunction(int key) {
    return key % SIZE;
}

void HashMap::set(int key, int value) {
    hasharray[hashFunction(key)]->append(key, value);
}

int HashMap::get(int key) {
    return hasharray[hashFunction(key)]->search(key);
}

HashMap::~HashMap() {
    for(int i = 0; i < SIZE; i++) {
        delete hasharray[i];
    } 
}