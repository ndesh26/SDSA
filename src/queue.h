#ifndef queue_h
#define queue_h

#define SIZE 10000  //Queue Size

struct queue{
    int size;
    int top;
    int bottom;
    int *Queue;
};

//Queries and Functions

struct queue *create_empty_queue(long int size);
int is_empty(struct queue *qp);
int dequeue(struct queue *qp);
void enqueue(struct queue *qp,long int value);

#endif
