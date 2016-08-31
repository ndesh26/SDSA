#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

struct node *make_node(long int val)
{
    struct node *node;
    node = calloc(1, sizeof(struct node));
    node->value = val;
    return node;
}

/*
 * Displays the entire list
 */
void display_list(struct node *head)
{
    struct node *cur = head;
    while (cur != NULL) {
        printf("%d ", cur->value);
        cur = cur->next;
    }
    printf("\n");
}

/*
 * Inserts a node after node p
 */
void insert(long int value, struct node *p)
{
    struct node * temp;

    temp = p->next;
    p->next = make_node(value);
    p->next->next = temp;
    p->next->prev = p;
}

/*
 * Return 1 if list is empty and 0 if it is not
 * No practical use of function
 */
int is_empty(struct node *head)
{
    return (head == NULL);
}

/*
 * Returns pointer to node with with given value
 * if it exists. Returns NULL otherwise
 */
struct node *search(long int value, struct node *head)
{
    while (head != NULL) {
        if (head->value == value) {
            break;
        }
        else {
            head = head->next;
        }
    }
    return head;
}

/*
 * delete the node whose pointer is p
 */
void delete(struct node *p)
{
    if(p->prev!=NULL)
        p->prev->next=p->next;
    if(p->next!=NULL)
        p->next->prev=p->prev;
}
