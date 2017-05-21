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

        float getReal() {
            return real;
        }

        float getComplex() {
            return complex;
        }

        void print() {
            cout << "This object is located at " << this << endl;
            cout << "Real " << this->real << " Complex " << this->complex << endl;
        }

        ~ComplexNumber() {
            cout << "Freeing ComplexNumber" << endl;
        }
};

class Student {
    private:
        string name;
    public:
        Student(string n) {
            name = n;
            cout << "Initialized string to " << name << endl;
        }

        ~Student() {
            cout << "Freeing student " << name << endl;
            //delete[] name;
        }
};

int main() {
    ComplexNumber * c = new ComplexNumber(3.54, 89.90);
    c->print();
    // c.setNumbers(3.54, 69.69);
    // c.print();
    
    const string name = "Tevin";
    Student s(name);
    cout << "Exiting" << endl;

    ComplexNumber * cDynamic = new ComplexNumber[10];

    for(int i = 0; i < 10; i++) {
        cDynamic[i].print();
    }

    delete[] cDynamic;

    delete c;
}