#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

struct node * make_node(int val)
{
    struct node *node;
    node = calloc(1, sizeof(struct node));
    node->value = val;
    return node;
}

void display_list(struct node *head)
{
    struct node *cur = head;
    while (cur != NULL) {
        printf("%d ", cur->value);
        cur = cur->next;
    }
    printf("\n");
}

void insert(int value, struct node * p, int * length ){
  struct node * temp;
  temp= p->next;
  p->next=make_node(value);
  p->next->next=temp;
  p->next->prev=p;
  *length =*length +1;
}
int isEmpty(int * length){

  if(*length ==0)
  return 0;
  else return 1;
}
struct node * Search(int value,struct node * head){
  while(head!=NULL){
    if(head->value==value){
      break;
    }
    else{
      head=head->next;
    }
  }
  return head;
}
int delete(struct node * p,int * length){
if(p->prev!=NULL)
  p->prev->next=p->next;
if(p->next!=NULL)
  p->next->prev=p->prev;
  *length=*length-1;
}
struct node * reverse(struct node * head){
    struct node * curr = head;
    struct node * temp,*prev=NULL;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
