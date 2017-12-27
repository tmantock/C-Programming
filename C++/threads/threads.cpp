#include <iostream>
#include <thread>
#include <algorithm>
#include <vector>

using namespace std;

void sortInts(vector<int>&&);

int main() {
    cout << "Program starting and creating thread" << endl;
    vector<int> array{ 3, 4, 9, 1, 2, 7, 5, 6, 10 };
    thread td(sortInts, array);
    cout << "Exiting program" << endl;
    td.join();

    return 0;
}

void sortInts(vector<int>&& array) {
    cout << "Sorting." << endl;
    sort(array.begin(), array.end());
    cout << "Finished sorting." << endl;
}
