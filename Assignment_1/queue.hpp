#ifndef QUEUE_HPP
#define QUEUE_HPP


class IntegerQueue {
public:
    virtual ~IntegerQueue() {}

 
    virtual void enqueue(int value) = 0;

    
    virtual int dequeue() = 0;

  
    virtual bool empty()  = 0;

    virtual bool full()  = 0;
};


#endif