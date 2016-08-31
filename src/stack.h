
#ifndef stack_h
#define stack_h

struct stack{
    long int *arr;
    long int top;
    long int size; 
};

struct stack *create_empty_stack(long int);
void push(struct stack *s, long int value);
int is_empty(struct stack *s);
long int pop(struct stack *s);

#endif
