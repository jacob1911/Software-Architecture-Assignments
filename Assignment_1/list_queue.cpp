#include "list_queue.hpp"
#include <stdlib.h>
#include <assert.h>

list_queue::list_queue()
{
    front = nullptr;
    rear = nullptr;
}
list_queue::~list_queue()
{
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
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = value;
    newnode->next = nullptr;

    // two cases empty and not empty
    if (empty())
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
int list_queue::dequeue()
{
    // Two cases again -> either empty or not empty
    assert(!empty());
    int returnval = front->data;
    Node *temp = front;
    front = front->next;
    if(front == nullptr){
        rear = nullptr;
    }
    delete (temp);
    return returnval;
}
bool list_queue::empty()
{
    return rear == nullptr;
}

bool list_queue::full()
{
    return false;
}