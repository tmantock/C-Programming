#include <iostream>
using namespace std;

int main() {
    int x = 545656;
    long long res = 0;
    while(x) {
        res = res*10 + x%10;
        cout << res << endl;
        x /= 10;
    }
    return (res<INT_MIN || res>INT_MAX) ? 0 : res;
}