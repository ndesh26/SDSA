#ifndef queue_h
#define queue_h

#define SIZE 10000  //Queue Size

struct node{
    int top;
    int bottom;
    int *Queue;
};

//Queries and Functions

void create_empty();
int is_empty(struct node);
int dequeue(struct node);
void enqueue(struct node, int value);

#endif
