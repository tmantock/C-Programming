#include <iostream>
#include <limits>

using namespace std;

void textOutput() {
    cout << "Function call" << endl;
    cout << "Looks like there's no hoisting" << endl;
    cout << "Multiple " << "String " << "Calls." << endl;
    return;
}

void textInput() {
    string input;
    int age;

    cout << "Enter your name: " << flush;
    cin >> input;
    cout << "Enter your age: " << flush;
    cin >> age;
    cout << "Your name is " << input << " and you are " << age << " years old."<< endl;

    return;
}

void integerTypes() {
  int value = 5;
  int new_value = 10;
  double db = 7.9238;
  float fl = 8.239023293343;
  long int bigInt = 82938723872388237;
  std::cout << "Addition: " << value + new_value << '\n';
  std::cout << "Subtraction: " << value - new_value << '\n';
  std::cout << "Multiplication: " << value * new_value << '\n';
  std::cout << "Division: " << value / new_value << '\n';
  std::cout << "Modulus: " << value % new_value << '\n';
  std::cout << "Max Int Value " << INT_MAX << endl;
  std::cout << "Min Int Value " << INT_MIN << endl;
  std::cout << "Size of int: " << sizeof(int) << '\n';
  std::cout << "Size of long int: " << sizeof(long int) << '\n';
  std::cout << "Size of long int: " << sizeof(short int) << '\n';
  std::cout << "Size of double: " << sizeof(double) << '\n';
  std::cout << "Size of float: " << sizeof(float) << '\n';

  return;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Starting Program..." << flush;
    cout << "Hello, World!" << endl;

    string planet = "Mars";
    string intro = "Hello ";
    int cats = 5;
    int moreCats = cats + 7;
    int dogs = moreCats * 2;
    dogs = dogs + 1;

    cout << intro + planet << endl;

    cout << "Number of cats: " << moreCats << endl;
    cout << "Number of animals: " << moreCats + dogs << endl;

    cout  << "Hello " << planet << "!" << endl;

    textOutput();
    //textInput();
    integerTypes();
    return 0;
}
