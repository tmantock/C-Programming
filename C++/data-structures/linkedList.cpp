#include <iostream>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

    // public member
    public:
        // constructor
        LinkedList(){
            this->head = NULL;
        }

        void prepend(int val){
            Node *n = new Node();
            n->x = val;
            n->next = this->head;

            this->head = n;
        }

        void append(int val) {
            Node *n = new Node();
            n->x = val;
            n->next = NULL;
            if(this->head == NULL) {
                this->head = n;
                return;
            }

            Node *node = this->head;

            while(node->next != NULL) {
                node = node->next;
            }

            node->next = n;
        }

        void traverse() {
            if(this->head == NULL) {
                return;
            }

            Node *node = this->head;

            while(node != NULL) {
                cout << node->x << endl;
                node = node->next;
            }
        }

        int popValue(){
            Node *n = this->head;
            int ret = n->x;

            this->head = this->head->next;
            delete n;
            return ret;
        }

    // private member
    private:
       Node *head;
};

int main() {
    LinkedList list;

    list.append(5);
    list.append(10);
    list.append(20);
    list.prepend(98);

    list.traverse();

    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    return 0;
}