#include<stdio.h>
#include "array_queue.hpp"
#include "list_queue.hpp"
#include<assert.h>

int main(){
    list_queue q;
    for(int i = 0; i < 10; i++){
        q.enqueue(i);
    }
    while(!q.empty()){
        printf("%d\n", q.dequeue());
    }
    for(int i = 0; i < 10; i++){
        q.enqueue(i*2+1);
    }
    for(int i = 0; i < 5; i++){
        printf("%d\n", q.dequeue());
    }
    for(int i = 0; i < 5; i++){
        q.enqueue(i+3);
    }
    for(int i = 0; i < 9; i++){
        printf("%d\n", q.dequeue());
    }
    for(int i = 0; i < 5; i++){
        q.enqueue(i*11);
    }
    while(!q.empty()){
        printf("%d\n", q.dequeue());
    }
    
    return 0;
}