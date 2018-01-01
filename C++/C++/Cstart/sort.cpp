#include <iostream>
#include <math.h>

using namespace std;

int binary_search(int arr[], int len, int n);

int main() {
    int list[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    int len = 10;

    int a = binary_search(list, 15, 14);

    cout << a << endl;

    return 0;
}

int binary_search(int arr[], int len, int n) {
    int mid = (len / 2);

    if(len == 0)
        return 0;

    if(n == arr[mid])
        return arr[mid];

    if(len == 2) {
        if(n > arr[0])
            return arr[1];

        if(n == arr[0])
            return arr[0];
    }
    
    int new_len = len - mid;
    int b[new_len];

    if(n < arr[mid]) {
        for(int i = mid; i >= 0; i--) {
            b[i] = arr[i];
        }
    }

    if(n > arr[mid]) {
        for(int i = 0, x = mid; x <= len; i++, x++) {
            b[i] = arr[x];
        }
    }

   return binary_search(b, new_len, n);
}