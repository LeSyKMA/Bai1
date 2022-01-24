#include "include\linked_list.h"
int main(int argc,char*argv[]){
    list linked_list;
    create_list(linked_list);
    for (int i = 0; i < 11; i++)
    {
        add_node(linked_list,create_node(i));
    }
    show_list(linked_list);
    


    return 0;
}