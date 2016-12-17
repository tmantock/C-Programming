#include <iostream>
using namespace std;

void showMenu(){
    cout << "1. Search " << endl;
    cout << "2. View Record " << endl;
    cout << "3. Quit" << endl;
}

int main(){
    showMenu();

    cout << "Enter selection " << endl;

    int input;
    cin >> input;

    switch(input){
        case 1:
            cout << "Searching ..." << endl;
        case 2:
            cout << "Viewing ..." << endl;
        case 3:
            cout << "Quiting ..." << endl;
        default:
            cout << "Please select an item from the menu" << endl;
    }
}