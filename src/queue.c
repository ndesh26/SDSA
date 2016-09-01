#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

struct node create_empty(int size_of_queue){
    struct node Queue;
    int Queue.q = malloc(size_of_queue*sizeof(int *));
    Queue.q = NULL;
    int Queue.top = 0;
    int Queue.bottom = 0;
    return Queue;
}

int is_empty(struct node Queue){
    int empty;
    if(Queue.top > Queue.bottom) empty=1;
    else empty = 0;
    return empty;
}

int dequeue(int *Queue){
    int value = Queue.q[Queue.bottom];
    Queue.bottom--;
    return value;
}

void enqueue(int *Queue, int value){
    Queue.bottom++;
    Queue.q[Queue.bottom] = value;
    return;
}
