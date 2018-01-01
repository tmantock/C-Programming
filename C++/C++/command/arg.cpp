#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    if(argc != 2) {
        cout << "Usage: " << argv[0] << " <filename>" << endl;
    } else {
        ifstream file(argv[1]);

        if(!file.is_open()) {
            cout << "FIle: " << argv[1] << " does not exist" << endl;
        } else {
            string line;

            while(file.good()) {
                getline(file, line);
                cout << line << endl;
            }

            file.close();
        }
    }
}
