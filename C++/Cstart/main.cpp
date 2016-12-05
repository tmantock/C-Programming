#include <iostream>
#include <iomanip>
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
  std::cout << "float: " << fixed << fl << '\n';
  std::cout << "Max Int Value " << INT_MAX << endl;
  std::cout << "Min Int Value " << INT_MIN << endl;
  std::cout << "Size of int: " << sizeof(int) << '\n';
  std::cout << "Size of long int: " << sizeof(long int) << '\n';
  std::cout << "Size of long int: " << sizeof(short int) << '\n';
  std::cout << "Size of double: " << sizeof(double) << '\n';
  std::cout << "Size of float: " << sizeof(float) << '\n';

  return;
}

void userCheck() {
  string password = "hello";
  std::cout << "Enter your password" << '\n';
  string input_password;
  std::cin >> input_password;

  if (password == input_password) {
    std::cout << "Your password is correct." << '\n';
  } else {
    std::cout << "Please try again." << '\n';
  }

  return;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Starting Program..." << flush;
    //cout << "Hello, World!" << endl;

    string planet = "Mars";
    string intro = "Hello ";
    int cats = 5;
    int moreCats = cats + 7;
    int dogs = moreCats * 2;
    dogs = dogs + 1;

    cout << intro + planet << endl;

    int inc = 0;

    while(inc < 5){
      std::cout << inc << '\n';
      inc++;
    }

    string const SECRET_PASSWORD = "password";

    string input;

    do {
      std::cout << "Enter your password: " << '\n';
      std::cin >> input;
      if(input != SECRET_PASSWORD){
        std::cout << "Password denied" << '\n';
      }
    } while(input != SECRET_PASSWORD);

    std::cout << "Password accepted" << '\n';



    //cout << "Number of cats: " << moreCats << endl;
    //cout << "Number of animals: " << moreCats + dogs << endl;

    //cout  << "Hello " << planet << "!" << endl;

    //textOutput();
    //textInput();
    //integerTypes();
    //userCheck();
    return 0;
}
