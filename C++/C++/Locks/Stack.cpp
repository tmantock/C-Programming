//
//  Stack.cpp
//  C++
//
//  Created by Tevin Mantock on 1/1/18.
//  Copyright © 2018 Tevin Mantock. All rights reserved.
//

#include "Stack.hpp"

Stack::Stack() {}

void Stack::push(int data) {
    stack.push_back(data);
    cv.notify_one();
}

int Stack::pop() {
    unique_lock<mutex> lk(mtx);
    while (stack.empty()) {
        cout << "I am waiting" << endl;
        cv.wait(lk, [this]{ return !this->stack.empty(); });
    }
    int value = stack[stack.size() - 1];
    stack.pop_back();

    lk.unlock();
    cv.notify_one();

    return value;
}

Stack::~Stack() {}
