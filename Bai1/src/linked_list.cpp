#include "include\linked_list.h"

node*create_node(int data){
    node *new_node = new node();
    new_node->data = data;
    new_node->next_ptr = nullptr;
}

void add_node(list &linked_list,node*pnode){
    if(linked_list.head_node==nullptr)   {
        linked_list.head_node = pnode;
        linked_list.tail_node = pnode;
    }
    pnode->next_ptr = linked_list.head_node;
    linked_list.head_node = pnode;
}
void create_list(list linked_list){
    linked_list.head_node = nullptr;
    linked_list.tail_node = nullptr;
}
void show_list(list linked_list){
    if(linked_list.head_node!=nullptr){

        node *new_node  = linked_list.head_node;
        while (new_node!=linked_list.tail_node)
        {
            std::cout<<new_node->data<<" ";
            new_node = new_node->next_ptr;
        }
    }
}

