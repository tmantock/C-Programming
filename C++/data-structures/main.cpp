#include "HashMap.hpp"

using namespace std;

int main() {
    HashMap h = HashMap();
    h.set(1,3);
    h.set(5, 8);
    h.set(0, 3);
    h.set(10, 89);
    int o = h.get(5);
    cout << o << endl;
}