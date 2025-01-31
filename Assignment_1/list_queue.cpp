#include "list_queue.hpp"
#include <assert.h>

list_queue::list_queue()
{
    front = nullptr;
    rear = nullptr;
}
list_queue::~list_queue()
{
    // Deletes all nodes making up the queue
    Node *temp;
    while (front != nullptr)
    {
        temp = front;
        delete (temp);
        front = front->next;
    }
}
void list_queue::enqueue(int value)
{
    // Makes a new node
    Node *newnode = new Node(value, nullptr);

    // two cases empty and not empty
    if (empty())
    {  
        // Front and rear are set to the same
        front = newnode;
        rear = newnode;
    }
    else
    {
        // The new node is set as the rear
        rear->next = newnode;
        rear = newnode;
    }
}
int list_queue::dequeue()
{
    // Cannot dequeue from empty queue
    assert(!empty());
    int returnval = front->data;
    Node *temp = front;
    front = front->next;
    // If the queue only contains one element, it is set to empty
    if(front == nullptr){
        rear = nullptr;
    }
    // Removes the previous front 
    delete temp;
    return returnval;
}
bool list_queue::empty()
{
    return rear == nullptr;
}

bool list_queue::full()
{
    // A queue consisting of nodes can never be full
    return false;
}