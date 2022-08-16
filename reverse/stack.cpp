//
// Created by bob on 8/16/22.
//

#include <stdexcept>
#include "stack.h"

void Stack::push(int32_t d) {

    if (top == STACK_SIZE)
        throw std::overflow_error("Stack: array is full");

    data[top] = d;
    top++;
}

int32_t Stack::pop() {

    if (top == 0)
        throw std::underflow_error("Stack: array is empty");

    top--;
    return data[top];
}

int32_t Stack::peek() {

    if (top == 0)
        throw std::underflow_error("Stack: array is empty");

    return data[top-1];
}
