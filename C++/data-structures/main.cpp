#include "DoublyLinkedList.hpp"

int main() {
    DoublyLinkedList l = DoublyLinkedList();
    l.append(5);
    l.append(6);
    l.append(7);
    l.append(8);
    l.traverseInReverse();
}