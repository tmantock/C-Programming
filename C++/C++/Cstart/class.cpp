#include <iostream>
#include <string>
using namespace std;

class ComplexNumber {
    private:
        float real;
        float complex;
    public:
        ComplexNumber() : real(0.0), complex(0.0) {
            cout << "No arg-constructot called" << endl;
        }

        ComplexNumber(float r, float c) : real(r), complex(c) {
            cout << "Inside Two Argument Constructor" << endl;
        }

        void setNumbers(float r, float c) {
            real = r;
            complex = c;
        }

        float getReal() const {
            return real;
        }

        float getComplex() const {
            return complex;
        }

        void print() const {
            cout << "This object is located at " << this << endl;
            cout << "Real " << this->real << " Complex " << this->complex << endl;
        }

        ~ComplexNumber() {
            cout << "Freeing ComplexNumber" << endl;
        }
};

class Student {
    private:
        mutable string name;
    public:
        Student(string n) {
            name = n;
            cout << "Initialized string to " << name << endl;
            // Can also use .length()
            // cout << "String length of " << name.size() << endl;
            // cout << "First 3 letters " << name.substr(0,3) << endl;
            // cout << "Erase " << name.erase(0,3) << endl;
            // cout << "Insert " << name.insert(0, "S") << endl;
            // cout << "Size of name is " << sizeof(name) << " bytes" << endl;
        }

        void changeStudentName(string newName) {
            this->name = newName;
        }

        void print() {
            this->changeStudentName("Jenny");
            cout << "Student is " << this->name << endl;
        }

        void print() const {
            this->name = "Joe";
            cout << "Student is " << this->name << endl;
        }

        ~Student() {
            cout << "Freeing student " << name << endl;
            //delete[] name;
        }
};

int main() {
    // ComplexNumber * c = new ComplexNumber(3.54, 89.90);
    // c->print();
    // c.setNumbers(3.54, 69.69);
    // c.print();
    
    Student s("Tevin");

    const Student cs("Jerry");
    s.print();
    cs.print();

    cout << "Exiting" << endl;

    //ComplexNumber * cDynamic = new ComplexNumber[10];

    // for(int i = 0; i < 10; i++) {
    //     cDynamic[i].print();
    // }

    // delete[] cDynamic;

    // delete c;
}