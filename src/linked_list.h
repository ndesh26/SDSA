
#ifndef linked_list_h
#define linked_list_h

struct node{
    long int value;
    struct node *next;
    struct node *prev;
};

void display_list(struct node *head);
void insert(long int value, struct node *p);
int is_empty_list(struct node *head);
struct node *search(long int value, struct node *head);
void delete(struct node *p);

#endif
