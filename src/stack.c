#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

struct stack *create_empty_stack(long int size)
{
    struct stack *sp;
    sp = malloc(sizeof(struct stack));
    sp->arr = (long int *)malloc(size * sizeof(long int));
    sp->size = size;
    sp->top = 0;
    return sp;
}

void push(struct stack *sp, long int value)
{
    if (sp == NULL)
        return;

    sp->arr[++(sp->top)] = value;
}

int is_empty_stack(struct stack *sp)
{
    return (sp->top == 0); 
}

long int pop(struct stack *sp)
{
    if (sp == NULL)
        return NULL;

    (sp->top)--;    

    return sp->arr[sp->top + 1];
}

