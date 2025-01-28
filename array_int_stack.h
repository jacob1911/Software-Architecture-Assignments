#ifndef ARRAY_INT_STACK_H
#define ARRAY_INT_STACK_H

#include "int_stack.h"

class Array_int_stack : public Int_stack {
private:
    int max;
    int top;
    int *stack;
public:
    void push(int) override;
    int pop() override;
    bool empty() override;
    bool full() override;
    Array_int_stack(int);
    ~Array_int_stack();
};

#endif