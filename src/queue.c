#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

//This creates an empty structure for queue
struct queue create_empty(int size){
    struct queue qp;
    int qp.q = malloc(size_of_queue*sizeof(int *));
    qp.q = NULL;
    qp.size = size_of_queue;
    qp.top = 0;
    qp.bottom = 0;
    return qp;
}

//This checks if the queue is empty
int is_empty(struct queue qp){
    int empty;
    if(qp.top > qp.bottom) empty=1;
    else empty = 0;
    return empty;
}

//Dequeue and element from a queue
int dequeue(struct queue qp){
    int value = qp.q[qp.bottom];
    qp.bottom--;
    return value;
}

//Enqueue an element into a queue
void enqueue(struct queue qp, int value){
    qp.bottom++;
    qp.q[qp.bottom] = value;
    return;
}
