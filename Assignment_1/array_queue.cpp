#include "array_queue.hpp"
#include<assert.h>
#include<stdio.h>
#define MAXSIZE 100

array_queue::array_queue(){
    max = MAXSIZE;
    front = -1;
    rear = -1;
    queue = new int[max];
}
array_queue::array_queue(int size) {
    max = size;
    front = -1;
    rear = -1;
    queue = new int[max];
}

void array_queue::enqueue(int value){
    // We have three cases to consider:
    // 1. The queue is empty
    // 2. The queue is neither empty nor full
    // 3. The queue is full

    // 
    // Case 1: The queue is empty
    if (empty()){
        rear = 0;
        front = 0;
        queue[rear] = value;
    }
    // Case 2: the queue is not full nor empty
    else if(!full()){
       rear++;
       if (rear >= max) rear = 0;
       queue[rear] = value;
    }
    // Case 3: nothing happens

}
int array_queue::dequeue() {
    assert(!empty());
    int returnval = queue[front];

    if(front == rear){
        front=-1;
        rear=-1;
    }
    else{
        front++;
    if (front >= max) front = 0;
    }
    return returnval;
}
bool array_queue::empty() {
    return front==-1;
}
bool array_queue::full() {
    if (front != 0){
        return (front - 1 == rear);
    }
    else{
        return (rear==max-1);
    }
}
