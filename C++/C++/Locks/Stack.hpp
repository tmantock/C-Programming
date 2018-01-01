//
//  Stack.hpp
//  C++
//
//  Created by Tevin Mantock on 1/1/18.
//  Copyright © 2018 Tevin Mantock. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <mutex>
#include <condition_variable>
#include <vector>
#include <iostream>

using std::mutex;
using std::vector;
using std::condition_variable;
using std::unique_lock;
using std::cout;
using std::endl;

class Stack {
    condition_variable cv;
    vector<int> stack;
    mutex mtx;
public:
    Stack();
    void push(int);
    int pop();
    ~Stack();
};

#endif /* Stack_hpp */
