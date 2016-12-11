#include <iostream>
using namespace std;

int main() {
    int values[3];

    values[0] = 67;
    values[1] = 11;
    values[2] = 57;

    cout << values[1] << endl;

    double numbers[4] = { 1.4, 2.5 , 3.14, 4.8} ;

    cout << numbers[0] << endl;

    int numberArray[8] = {};

    cout << sizeof(numberArray)/sizeof(*numberArray) << endl;

    for (int i = 0; i < sizeof(numberArray)/sizeof(*numberArray); i++){
        cout << "Index: "<< i << " Value: " << numberArray[i] << endl;
    }

    return 0;
}