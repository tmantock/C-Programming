#include <iostream>
using namespace std;

void showMenu(){
    cout << "1. Search " << endl;
    cout << "2. View Record " << endl;
    cout << "3. Quit" << endl;
}

int recieveInput() {
    cout << "Enter selection " << endl;

    int input;
    cin >> input;

    return input;
}

void processSelection(int x){
    switch(x){
        case 1:
            cout << "Searching ..." << endl;
            break;
        case 2:
            cout << "Viewing ..." << endl;
            break;
        case 3:
            cout << "Quiting ..." << endl;
            break;
        default:
            cout << "Please select an item from the menu" << endl;
            break;
    }
}

int main(){
    //cannot return arrays from functions
    showMenu();

    int input = recieveInput();    
    
    processSelection(input);
   
}