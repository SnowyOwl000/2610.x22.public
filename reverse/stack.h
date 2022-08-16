//
// Created by bob on 8/16/22.
//

#ifndef _STACK_H
#define _STACK_H

#include <cstdint>

const int32_t
    STACK_SIZE = 16;

class Stack {
public:
    Stack() { top = 0; }
    ~Stack() = default;

    bool isEmpty() const { return top == 0; }
    bool size() const { return top; }
    void clear() { top = 0; }

    void push(int32_t d);
    int32_t pop();
    int32_t peek();
private:
    int32_t
        data[STACK_SIZE],
        top;
};


#endif //_STACK_H
