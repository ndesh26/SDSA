
#ifndef stack_h
#define stack_h

struct stack{
    long int *arr;
    long int top;
    long int size; 
};

struct stack *create_empty_stack(long int);
void push(struct stack *sp, long int value);
int is_empty(struct stack *sp);
long int pop(struct stack *sp);

#endif
