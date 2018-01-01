#include <iostream>
#include <thread>
#include <algorithm>
#include <vector>
#include <pthread.h>
#include <string>

using namespace std;

void sortInts(vector<int>&&);
void* print_message(void*);

int main() {
    pthread_t thread1, thread2;
    string message1 = "Thread 1", message2 = "Thread 2";
    int ret1, ret2;

    ret1 = pthread_create(&thread1, NULL, print_message, (void*) &message1);
    ret2 = pthread_create(&thread2, NULL, print_message, (void*) &message2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    cout << "Thread 1 returns: " << ret1 << endl;
    cout << "Thread 2 returns: " << ret2 << endl;

    return 0;
}

void* print_message(void* ptr) {
  string str = *reinterpret_cast<string*>(ptr);
  cout << str << endl;

  return nullptr;
}

void sortInts(vector<int>&& array) {
    cout << "Sorting." << endl;
    sort(array.begin(), array.end());
    cout << "Finished sorting." << endl;
}
