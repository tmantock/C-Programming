#include <iostream>
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
    textInput();
    return 0;
}

