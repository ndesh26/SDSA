#ifndef queue_h
#define queue_h

#define SIZE 10000  //Queue Size

//Queries and Functions

void create_empty();
int is_empty(int *Queue);
int dequeue(int *Queue);
void enqueue(int *Queue, int value);
int top(int *Queue);
int bottom(int *Queue);

#endif
