#include <iostream>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };
    // private member
    private:
       Node *head;
       int length;

    // public member
    public:
        // constructor
        LinkedList(){
            head = NULL;
            length = 0;
        }

        int getLength() {
            return length;
        }

        void prepend(int val){
            Node *n = new Node();
            n->x = val;
            n->next = head;

            head = n;
            length++;
        }

        void append(int val) {
            length++;

            Node *n = new Node();
            n->x = val;
            n->next = NULL;
            if(head == NULL) {
                head = n;
                return;
            }

            Node *node = head;

            while(node->next != NULL) {
                node = node->next;
            }

            node->next = n;
        }

        void traverse() {
            if(head == NULL) {
                return;
            }

            Node *node = head;

            while(node != NULL) {
                cout << node->x << endl;
                node = node->next;
            }
        }

        int popValue(){
            Node *n = head;
            int ret = n->x;

            head = head->next;
            delete n;
            return ret;
        }
};

int main() {
    LinkedList list;

    list.append(5);
    list.append(10);
    list.append(20);
    list.prepend(98);

    list.traverse();

    cout << list.getLength() << endl;
    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    return 0;
}