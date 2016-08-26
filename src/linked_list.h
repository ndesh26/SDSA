
#ifndef linked_list_h
#define linked_list_h

struct node{
    long int value;
    struct node *next;
    struct node *prev;
};

void display_list(struct node *head);
void insert(long int value, struct node *p);
int isEmpty(struct node *head);
struct node *Search(long int value, struct node *head);
void delete(struct node *p);

#endif
