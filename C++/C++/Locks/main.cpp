//
//  main.cpp
//  C++
//
//  Created by Tevin Mantock on 1/1/18.
//  Copyright © 2018 Tevin Mantock. All rights reserved.
//

#include <thread>
#include "Stack.hpp"

using std::thread;

void worker_thread(Stack*);

int main() {
    Stack* stack = new Stack();

    thread worker(worker_thread, stack);
    cout << "In main thread.\n";
    cout << stack->pop() << endl;

    worker.join();

    return 0;
}

void worker_thread(Stack* s) {
    cout << "In worker thread.\n";
    s->push(6);
}
