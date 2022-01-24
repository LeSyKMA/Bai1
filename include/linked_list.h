#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

typedef struct node
{
    int data;
    node *next_ptr;
};
typedef struct list
{
    node *head_node;
    node *tail_node;
};
node *create_node(int data);
void create_list(list linked_list);
void add_node(list&linked_list,node*node);
void show_list(list linked_list);

#endif