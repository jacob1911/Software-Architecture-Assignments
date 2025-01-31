#ifndef LIST_QUEUE_HPP
#define LIST_QUEUE_HPP

#include "queue.hpp"

class list_queue : public IntegerQueue {
private:
    struct Node {
        int data;
        Node *next;
        // Constructor for node
        Node (int value, Node* next_n){
            data = value;
            next = next_n;
        }
    };
    Node *front;
    Node *rear;
public:
    list_queue();
    ~list_queue();
    void enqueue(int value) override;
    int dequeue() override;
    bool empty() override;
    bool full() override;
};

#endif