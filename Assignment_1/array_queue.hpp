#ifndef ARRAY_QUEUE_HPP
#define ARRAY_QUEUE_HPP

#include "queue.hpp"

class array_queue : public IntegerQueue {
private:
    int max;
    int front;
    int rear;
    int *queue;
public:
    array_queue(int);
    array_queue();
    ~array_queue();
    void enqueue(int value) override;
    int dequeue() override;
    bool empty() override;
    bool full() override;

};

#endif