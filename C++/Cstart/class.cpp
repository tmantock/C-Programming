#include <iostream>
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

        float getReal() {
            return real;
        }

        float getComplex() {
            return complex;
        }

        void print() {
            cout << "Real " << real << " Complex " << complex << endl;
        }

        ~ComplexNumber() {
            cout << "Freeing ComplexNumber" << endl;
        }
};

class Student {
    private:
        char * name;
    public:
        Student(const char * n) {
            name = new char[50];
            strcpy(name, n);
            cout << "Initialized string to " << name << endl;
        }

        ~Student() {
            cout << "Freeing student " << name << endl;
            delete[] name;
        }
};

int main() {
    ComplexNumber * c = new ComplexNumber(3.54, 89.90);
    c->print();
    // c.setNumbers(3.54, 69.69);
    // c.print();
    
    const char name[10] = "Tevin";
    Student s(name);
    cout << "Exiting" << endl;

    delete c;
}