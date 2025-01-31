#ifndef ARRAY_QUEUE_HPP
#define ARRAY_QUEUE_HPP

#include "queue.hpp"
#define MAXSIZE 100

class array_queue : public IntegerQueue {
private:
    int max;    // max length of the queue
    int front;
    int rear;
    int *queue; // Array containing the data
public:
    array_queue();  // Max becomes the default length
    array_queue(int);   // Becomes a custom length
    ~array_queue();
    void enqueue(int value) override;
    int dequeue() override;
    bool empty() override;
    bool full() override;

};

#endif