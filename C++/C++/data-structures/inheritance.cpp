#include <iostream>
#include <string>

using namespace std;

class Person {
    protected:
        string name;
    public:
        Person(string n) : name(n) {
            cout << "Person has been created" << endl;
        }

        void sayName() {
            cout << "My name is " << name << endl;
        }

        ~Person() {
            cout << "Delelting Person" << endl;
        }
};

class Student : public Person {
    public:
        Student(string n) : Person(n) {}
        void smarty() {
            cout << "My name is " << name << " and I'm smart" << endl;
        }

        ~Student() {
            cout << "Deleting Student" << endl;
        }
};

int main() {
    string name = "Charles";
    Student *s = new Student(name);
    s->sayName();
    s->smarty();
    delete s;
    return 0;
}
