#include "DoublyLinkedList.hpp"

int main() {
    DoublyLinkedList l = DoublyLinkedList();
    l.prepend(5);
    l.prepend(6);
    l.prepend(7);
    l.prepend(8);
    l.append(10);
    l.traverseInReverse();
}