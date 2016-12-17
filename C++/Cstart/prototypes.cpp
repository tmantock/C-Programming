#include <iostream>
using namespace std;

//Prototype
//What the function is called and what it takes.
//Provides information for the compiler which runs synchronously or line by line
void doSomething();

int main(){
    doSomething();
    doSomething();

    return 0;    
}

void doSomething(){
    cout << "Hello" << endl;
}